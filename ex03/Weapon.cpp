/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:07:42 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 18:43:22 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

Weapon::Weapon( void )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string const&	Weapon::getType( void )
{
	return this->_type;
}

void	Weapon::setType( std::string type )
{
   this->_type = type;

   return ;
}
