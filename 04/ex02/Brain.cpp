/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:50:17 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:51:26 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = i % 2 ? "Je ne veux pas bruler le monde" : "Je veux bruler le monde";
	std::cout << "A brain was created\n";
}

Brain::~Brain()
{
	std::cout << "A brain was destroyed\n";
}

Brain::Brain(const Brain& brain)
{
    for (int i = 0; i < IDEAS_NUMBER; i++)
        this->setIdea(i, brain.getIdea(i));
    std::cout << "A brain was copied\n";
}

Brain& Brain::operator=(const Brain& brain)
{
    for (int i = 0; i < IDEAS_NUMBER; i++)
        this->setIdea(i, brain.getIdea(i));
    return *this;
}

std::string Brain::getIdea(int index) const
{
    if (index >= IDEAS_NUMBER) index = IDEAS_NUMBER - 1;
    else if (index < 0) index = 0;
    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string idea)
{
    if (index >= IDEAS_NUMBER) index = IDEAS_NUMBER - 1;
    else if (index < 0) index = 0;
    this->ideas[index] = idea;
}