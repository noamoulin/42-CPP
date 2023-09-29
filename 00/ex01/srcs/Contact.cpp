/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:20:35 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:38:23 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.h"

Contact::Contact(void)
{
    first_name = "N/A";
    last_name = "N/A";
    nickname = "N/A";
    phone_number = "N/A";
    darkest_secret = "N/A";
    return;
}

Contact& Contact::setFirstName(std::string name)
{
    first_name = name;
    return *this;
}

Contact& Contact::setLastName(std::string name)
{
    last_name = name;
    return *this;
}

Contact& Contact::setNickname(std::string name)
{
    nickname = name;
    return *this;
}

Contact& Contact::setPhoneNumber(std::string number)
{
    phone_number = number;
    return *this;
}

Contact& Contact::setDarkestSecret(std::string secret)
{
    darkest_secret = secret;
    return *this;
}

static std::string fmt_str(std::string str, int len)
{
    int length_ = str.length();
    if (length_ > len)
        str = str.substr(0, len - 1) + ".";
    else
        for (int i = 0; i < len - length_; i++)
            str += " ";
    return str;
}

std::string Contact::formatted_id(void)
{
    return "| " + fmt_str(first_name, 8) + " | " + fmt_str(last_name, 8) + \
        " | " + fmt_str(nickname, 8) + " |";
}

std::string Contact::formatted_full_infos(void)
{
    return "First name : " + first_name + "\n" + "Last name : " + \
        last_name + "\n" + "Nickname : " + nickname + "\n" + \
            "Phone number : " + phone_number + "\n" + \
                "Darkest secret : " + darkest_secret + "\n";
}

Contact::~Contact(void)
{
    return;
}