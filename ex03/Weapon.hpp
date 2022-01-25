/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:01:09 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 18:42:40 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{

public:

	Weapon( std::string type );
	Weapon( void );
	~Weapon( void );

	std::string const&	getType( void );
	void				setType( std::string type );

private:

	std::string	_type;

};

#endif
