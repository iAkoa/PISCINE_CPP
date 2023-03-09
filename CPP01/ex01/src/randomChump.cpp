/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:39:56 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/02 00:40:48 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/zombie.hpp"

void	randomChump( std::string name )
{
    Zombie zombie(name);
	zombie.announce();
}