/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mycomputer <mycomputer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:36:38 by mycomputer        #+#    #+#             */
/*   Updated: 2023/03/12 17:49:31 by mycomputer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class   Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl(void);
		~Harl(void);
		void complain( std::string level );
};

typedef void (Harl::*t_func) ( void );