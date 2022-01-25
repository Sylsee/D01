/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:30:07 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:38:34 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	randomChump("Foo");
	randomChump("Bobby");

	Zombie*	jean = newZombie("Jean");
	Zombie*	foo = newZombie("Foo");

	jean->announce();
	foo->announce();

	delete jean;
	delete foo;

	return 0;
}
