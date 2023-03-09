/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:36:59 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/02 00:41:00 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    class Zombie *newHorde = new Zombie[N];
	for(int i = 0; i < N; ++i)
		newHorde[i].setname(name);
	return newHorde;
}