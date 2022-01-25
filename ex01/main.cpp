/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:30:07 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:51:03 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int		n = 100;
	Zombie*	jean = zombieHorde(n, "Foo");

	for (int i = 0; i < n; i++)
		jean->announce();

	delete [] jean;

	return 0;
}
