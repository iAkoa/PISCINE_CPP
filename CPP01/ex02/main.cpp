/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:40:06 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/02 02:17:41 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << "variable = "<< variable << std::endl;
    std::cout << "*stringPTR = "<<*stringPTR << std::endl;
    std::cout << "stringREF = "<< stringREF << std::endl;
    
    return (0);
}