/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:44:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:49:02 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void	setName( std::string name );
	void	announce( void );

private:

	std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif
