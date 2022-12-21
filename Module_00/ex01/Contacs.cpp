/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:57:18 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/12/18 17:09:54 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Functions.hpp"

std::string Contact::quetions[5] = 
{
	"firstname",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::Add()
{
	int c = 0;
	
	while (c < 5)
	{
		std::cout << Contact::quetions[c] << ": ";
		getline(std::cin, this->data[c]);
		if (this->data[c].empty())
		c--;
		c++;
	}
	return ;
}

void PhoneBook::PrintHead()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Contact::Display(int index)
{
	if (this->data[0].empty())
		throw "ERROR";
		
	std::cout << "|" << std::setw(10) << index;
	
	for (int x = 0; x < 3; x++)
	{

		if(this->data[x].length() > 10)
			std::cout << "|" << this->data[x].substr(0,9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->data[x];
	}
	std::cout << "|";
	std::cout << "\n";
}

void PhoneBook::Search()
{
	PrintHead();
	try
	{
		for (int x = 0; x <= this->number; x++)
		{
			this->contacs[x].Display(x + 1);
		}	
		std::cout << "|-------------------------------------------|" << std::endl;
	}
	catch(...)
	{
		std::cout << "|DO AT LEAST ONE ADD PLEASE!!!!!!!!!!!!!!!!!|";
		std::cout << "\n";
		std::cout << "|-------------------------------------------|";
		std::cout << "\n";
	}
}

