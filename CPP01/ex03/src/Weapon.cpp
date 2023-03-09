/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:25:45 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/04 04:53:09 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    return;
}
Weapon::~Weapon(void)
{
    return;
}
void Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string const & Weapon::getType(void) const
{
	return this->_type;
}