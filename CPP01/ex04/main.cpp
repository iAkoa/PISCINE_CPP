/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:05:10 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/12 16:25:11 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::ifstream &influx, std::ofstream &outflux, std::string s1, std::string s2)
{
    std::string line;
    size_t         idx;
    
    while (getline(influx, line))
    {
        idx = line.find(s1, 0);
        while (idx != std::string::npos)
        {
            line.erase(idx, s1.length());
            line.insert(idx, s2);
            idx = line.find(s1, idx);
        }
        outflux << line << std::endl;
    }
}
int main (int ac, char **arg)
{
    if (ac != 4)
    {
        std::cout << "wrong arguments !" << std::endl;
        return ( 0);
    }
    std::string filename(arg[1]);
    std::ifstream influx(arg[1]);
    filename += ".replace";
    std::ofstream outflux(filename.c_str());
    if (!outflux)
        std::cout << "flux error !";
    if (!influx)
        std::cout << "flux error !";
    std::string s1(arg[2]);
    std::string s2(arg[3]);
    replace(influx, outflux, s1, s2);
    
    return 0;
}