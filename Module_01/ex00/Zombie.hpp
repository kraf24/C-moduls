/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:22:44 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/12/19 14:47:12 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>


class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce(void);
		static std::string NameList[5];
	private:
		std::string Name;
};

	void		randomChump( std::string name );
	std::string	RandName();
	Zombie		*newZombie(std::string name);