/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:52:16 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 21:10:45 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Program must have three arguments" << std::endl;
		return 1;
	}

	std::string		output = argv[1];
	output += ".replace";
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if (s1.length() == 0 || s2.length() == 0) {
		std::cout << "Error: s1 and s2 canno't be empty" << std::endl;
		return 1;
	}

	std::string	buff;
	std::string	tmp;
	std::string	cache;
	int			pos = 0;

	std::fstream	file;
	file.open(argv[1], std::fstream::in);
	if (file.is_open()) {
		while (std::getline(file, buff)) {
			while ((pos = buff.find(s1)) != -1) {
				cache += buff.substr(0, pos) + s2;
				buff = buff.substr(pos + s1.length(), buff.length());
			}
			cache += buff + '\n';
		}
		file.close();
	}
	else
		std::cout << "Error: canno't open input file" << std::endl;

	file.open(output.c_str(), std::fstream::out);
	if (file.is_open()) {
		file << cache;
		file.close();
	}
	else
		std::cout << "Error: canno't open output file" << std::endl;

	return 0;
}
