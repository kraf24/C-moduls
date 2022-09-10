/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:04:00 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/26 14:58:24 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	try
	{	
		if ( argc == 1)
			throw "Error";
		while (i < argc)
		{
			for (int x = 0; argv[i][x]; x++)
			argv[i][x] = toupper(argv[i][x]);
			std::cout << argv[i];
			i++;
		}
	}
	catch (...)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	return (0);
}
