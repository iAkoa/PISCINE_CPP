/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:31:47 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/02 00:39:41 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void setname(std::string str);
		void announce(void);
	private:
		std::string _name;
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
void	randomChump( std::string name );

#endif