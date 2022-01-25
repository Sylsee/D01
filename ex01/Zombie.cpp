/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:46:48 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:48:08 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " destroyed" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	if (this->_name.compare("Foo") == 0)
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << this->_name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
	return ;
}
