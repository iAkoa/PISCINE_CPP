/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:38:00 by rmattheo          #+#    #+#             */
/*   Updated: 2023/03/08 10:55:12 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string infile, std::string replaced, std::string replacer) : _infile(infile), _replaced(replaced), _replacer(replacer)
{
    return;
}

sed::~sed(void)
{
    return;
}
std::ifstream&  sed::getInfile(void)
{
    return this->_infile;
}
std::ofstream&  sed::getOutfile(void)
{
    return this->_outfile;
}

void sed::setInfile(std::string infile)
{
    this->_infile.open(infile.c_str());
    if (!this->_infile.is_open())
        throw(infile + ": No such file or directory");
}
void sed::setOutfile(std::string outfile)
{
    std::string extension = ".replace";
    outfile += extension;
    this->_outfile.open(outfile.c_str());
    if (!this->_outfile.is_open())
        throw(outfile + ": No such file or directory");
}