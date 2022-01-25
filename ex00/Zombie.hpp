/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:44:36 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:39:31 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );

private:

	std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
