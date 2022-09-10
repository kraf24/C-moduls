/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:29:31 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/29 19:11:31 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Functions.hpp"

PhoneBook::PhoneBook()
{
	this->number = 0;
}

PhoneBook::~PhoneBook()
{}

void PhoneBook::ComandDefine(void)
{
	std::string str;
	int i = 0;
	
	while (true)
	{
		std::getline(std::cin, str);
		
		if (str == "ADD")
		{
			if(i > 7)
				{
					std::cout << "starting again\n";
					i = 0;
				}
			this->contacs[i].Add();
			if (i > this->number)
				this->number = i;
			i++;
		}
		else if(str == "SEARCH")
			this->Search();
		else if(str == "EXIT")
			break;
		else
			continue;
	}
}
