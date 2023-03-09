/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:32:37 by rmattheo          #+#    #+#             */
/*   Updated: 2023/03/08 10:43:30 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class sed
{
	private:
		std::ifstream _infile;
		std::ofstream _outfile;
		std::string _replaced;
		std::string _replacer;

	public:
		sed(std::string infile, std::string replaced, std::string replacer);
		~sed(void);
		void setReplaced(std::string replaced);
		void setReplacer(std::string replacer);
		void setInfile(std::string infile);
		void setOutfile(std::string outfile);
		std::ifstream& getInfile(void);
		std::ofstream& getOutfile(void);
		std::string getReplaced(void);
		std::string getReplacer(void);
		void writeToOutfile(std::string outfileContent);
};