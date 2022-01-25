/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:10:38 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 18:44:21 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{

public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	void	attack( void );

private:

	std::string	_name;
	Weapon&		_weapon;

};

#endif
