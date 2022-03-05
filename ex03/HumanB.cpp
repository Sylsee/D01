/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:14:38 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 18:47:45 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void )
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}
