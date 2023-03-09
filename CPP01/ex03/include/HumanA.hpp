/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:25:35 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/04 05:40:10 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class   HumanA
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
};
