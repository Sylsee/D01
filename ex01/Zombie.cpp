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
	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	if (_name.compare("Foo") == 0)
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}
