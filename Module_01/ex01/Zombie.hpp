/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:22:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/31 18:20:15 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>


class Zombie
{
	public:
		Zombie();
		void	announce(void);
		void	ChangeName(std::string name);
		~Zombie();
		static std::string NameList[5];
	private:
		std::string Name;
};

	std::string	RandName();
	Zombie* zombieHorde( int N, std::string name );