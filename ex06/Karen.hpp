/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:19:24 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/25 22:46:37 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class	Karen
{

public:

	Karen( void );
	~Karen( void );

	void	filter( std::string level );

private:

	int		getLevel( std::string level );

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
