/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:37:03 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/10 09:51:52 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    return;
}

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->_name << "' destroyed." << std::endl;
}