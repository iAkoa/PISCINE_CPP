/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:17:14 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/12 17:53:20 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string input;
    Harl        harl;

    do
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    }while (input.compare("exit"));

    return 0;
}