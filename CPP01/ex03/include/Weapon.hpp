/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:24:12 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/05 02:50:00 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
	private :
		std::string _type;
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon(void);
		void setType(std::string type);
		std::string const & getType(void) const;
};