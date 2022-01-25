/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:27:13 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 22:46:08 by spoliart         ###   ########.fr       */
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

int	Karen::getLevel( std::string level )
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			return i;
	}
	return (4);
}

void	Karen::filter( std::string level )
{
	void	(Karen::*f[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	enum {
		DEBUG = 0,
		INFO = 1,
		WARNING = 2,
		ERROR = 3
	};

	switch (getLevel(level))
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*f[DEBUG])();
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			(this->*f[INFO])();
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f[WARNING])();
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f[ERROR])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
