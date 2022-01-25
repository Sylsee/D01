/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:27:13 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 21:58:02 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void	Karen::complain( std::string level )
{
	void	(Karen::*f[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*f[i])();
			return ;
		}
	}
	return ;
}

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn’t put enough bacon in my burger!"
		" If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
		" I’ve been coming for years whereas you started working here since "
		"last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
