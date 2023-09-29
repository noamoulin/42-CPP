/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:56:20 by noa               #+#    #+#             */
/*   Updated: 2023/09/23 15:26:14 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.h"
#include <bits/stdc++.h> 
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    contacts_number = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::addContact(Contact contact)
{
    if (contacts_number < 8)
    {
        if (contacts_number == 0)
            oldest_contact_index = 0;
        contacts[contacts_number++] = contact;
    }
    else
    {
        contacts[oldest_contact_index] = contact;
        if (oldest_contact_index == 7)
            oldest_contact_index = 0;
        else
            oldest_contact_index++;
    }
}

static std::string ask(std::string question)
{
    std::string answer("");

    while (!answer.length())
    {
        std::cout << question;
        if(!std::getline(std::cin, answer) || std::cin.eof())
            exit(EXIT_FAILURE);
    }
    return answer;
}

void PhoneBook::add(void)
{
    Contact contact;
    
    contact.setFirstName(ask("First name : "))
           .setLastName(ask("Last Name : "))
           .setNickname(ask("Nickname : "))
           .setPhoneNumber(ask("Phone Number : "))
           .setDarkestSecret(ask("Darkest secret : "));

    this->addContact(contact);
    std::cout << "contact added" << std::endl;
}

static std::string m_itoa(int number)
{
    std::string result;
    bool is_negative(false);

    if (number == 0)
    {
        result.push_back('0');
        return result;
    }
    if (number < 0)
    {
        is_negative = true;
        number = -number;
    }
    while (number > 0) {
        int digit = number % 10;
        result.push_back('0' + digit);
        number /= 10;
    }
    if (is_negative)
        result.push_back('-');

    std::reverse(result.begin(), result.end());

    return result;
}

void PhoneBook::displayContactsList(void)
{
    std::string list;

    for (int i = 0; i < contacts_number; i++)
        list += "| " + m_itoa(i) + " " + contacts[i].formatted_id() + "\n";
    std::cout << list;
}

void PhoneBook::search(void)
{
    int index;

    if (!contacts_number)
        return;
    std::cout << std::endl;
    this->displayContactsList();
    std::cout << std::endl;
    index = std::atoi(ask("index : ").c_str());
    if (index >= contacts_number)
        index = contacts_number - 1;
    else if (index < 0)
        index = 0;
    std::cout << std::endl << contacts[index].formatted_full_infos() << std::endl;
}