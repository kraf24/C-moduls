/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:24:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/29 19:18:16 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iomanip>
#include<iostream>
#include<string>
#include<cstring>

void ComandDefine(void);
	
class Contact
{
	public:
		Contact();
		~Contact();
		void	Add();
		void	Display(int index);
	private:
		static std::string quetions[5];
		std::string data[5];
};

class PhoneBook
{
	public:
		void	PrintHead();
		void	ComandDefine();
		void	Search();	
		PhoneBook();
		~PhoneBook();
	private:
		int number;
		Contact contacs[8];
};