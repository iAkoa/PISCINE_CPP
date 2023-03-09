/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:25:40 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/07 06:14:04 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name,  Weapon& weapon)  : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return;
}

void HumanA::attack()
{
    std::cout   << this->_name
                << " attacks with their "
                << this->_weapon.getType()
                << std::endl;
}