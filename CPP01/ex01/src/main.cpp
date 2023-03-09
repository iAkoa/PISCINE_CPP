/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:37:37 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/02 00:40:57 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/zombie.hpp"

int main ()
{
	Zombie *theHorde;
	theHorde = zombieHorde(6, "lezombi");
	for(unsigned int i = 0; i < 6; ++i)
	{
		std::cout << "zombie " << i + 1 << ": ";
		theHorde[i].announce();
	}
	delete[] theHorde;
	return 0;
}