/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:42:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 21:59:24 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen		karen;
	std::string	command;

	while (1) {
		std::cout << "Level: ";
		std::getline(std::cin, command);
		karen.complain(command);
		if (command.length() == 0)
			break ;
	}
	return 0;
}
