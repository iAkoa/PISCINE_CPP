/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:37:37 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/10 09:51:41 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie zombie1("Marc-laquoncu");
	Zombie *zombie2 = newZombie("Laure-et-yeah");
	zombie1.announce();
	zombie2->announce();
	randomChump("héri-zombie-sexuel");
	delete zombie2;
}