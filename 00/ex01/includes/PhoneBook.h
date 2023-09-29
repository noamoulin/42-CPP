/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:22:21 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:36:54 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.h"

class PhoneBook
{
    private:
    Contact contacts[8];
    int oldest_contact_index;
    int contacts_number;

    void addContact(Contact);
    void displayContactsList(void);

    public:
    PhoneBook(void);
    void add(void);
    void search(void);
    ~PhoneBook(void);
};

#endif