/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:53:01 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 17:59:04 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		hi = "HI THIS IS BRAIN";
	std::string*	stringPTR = &hi;
	std::string&	stringREF = hi;

	std::cout << "hi address: " << &hi << std::endl;
	std::cout << "hi address by stringPTR: " << stringPTR << std::endl;
	std::cout << "hi address by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "hi value: " << hi << std::endl;
	std::cout << "hi value by stringPTR: " << *stringPTR << std::endl;
	std::cout << "hi value by stringREF: " << stringREF << std::endl;

	return 0;
}
