/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:10:38 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 18:45:11 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

public:


	HumanB( std::string name );
	~HumanB( void );

	void	setWeapon( Weapon& weapon );
	void	attack( void );

private:

	std::string	_name;
	Weapon*		_weapon;

};

#endif
