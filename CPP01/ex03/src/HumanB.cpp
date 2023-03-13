/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:25:43 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/11 10:27:47 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) 
{
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
void HumanB::attack()
{
    if(this->_weapon)
    {
        std::cout   << this->_name
                    << " attacks with their "
                    << this->_weapon->getType()
                    << std::endl;
    }
    else
    {
              std::cout << this->_name
                        << " doesn't have a weapon"
                        << std::endl;
    }
}