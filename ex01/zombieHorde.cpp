/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:43:02 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:46:54 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *	zombieHorde( int N, std::string name )
{
	Zombie *	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return horde;
}
