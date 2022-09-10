/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:22:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/31 17:55:15 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>


class Zombie
{
	public:
		Zombie(std::string name);
		void		announce(void);
		~Zombie();
		static std::string NameList[5];
	private:
		std::string Name;
};

	void		randomChump( std::string name );
	std::string	RandName();
	Zombie		*newZombie(std::string name);