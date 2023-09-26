/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:12:18 by noa               #+#    #+#             */
/*   Updated: 2023/06/19 17:22:41 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <strings.h>
#include <string.h>

static bool buffer_read(std::ifstream& file, char * buffer, size_t buffer_size)
{
    size_t len_in_buffer = strlen(buffer);
    size_t len_to_read = buffer_size - len_in_buffer;
    size_t start_index = len_in_buffer;

    file.read(&buffer[start_index], len_to_read);

    if (file.fail()) return false; else return true;
}

static void buffer_shift(char * buffer, size_t len)
{
    for (size_t i = 0; i < len - 1; i++)
        buffer[i] = buffer[i + 1];
    buffer[len - 1] = (char)0;
}

bool replace(std::ifstream& source_file, std::ofstream& dest_file, std::string search, std::string replace)
{
    char write_buffer[WRITE_BUFFER_SIZE]{(char)0};
    size_t search_length = search.length();
    char * read_buffer;

    if (!(read_buffer = new char[search_length]{(char)0})) return false;
    
    while (!source_file.eof())
    {
        std::string to_write = "";
    
        if (!buffer_read(source_file, read_buffer, search_length))
        {
            delete[] read_buffer;
            return false;
        }
        if (std::string(read_buffer) == search)
        {
            to_write = replace;
            bzero(read_buffer, search_length);
        }
        else
        {
            to_write.push_back(read_buffer[0]);
            buffer_shift(read_buffer, search_length);
        }
        dest_file << to_write;
        if (dest_file.fail())
        {
            delete[] read_buffer;
            return false;
        }
    }
    return true;
}