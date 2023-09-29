/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:57:07 by noa               #+#    #+#             */
/*   Updated: 2023/06/18 16:15:56 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact(void);
    Contact& setFirstName(std::string);
    Contact& setLastName(std::string);
    Contact& setNickname(std::string);
    Contact& setPhoneNumber(std::string);
    Contact& setDarkestSecret(std::string);
    std::string formatted_id(void);
    std::string formatted_full_infos(void);
    ~Contact(void);
};

#endif