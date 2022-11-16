/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:30 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 14:51:35 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include "color.hpp"


class Fixed {

private:

	int					_entier;
	static const int	_constant = 8;

public:

	Fixed( void );
	Fixed( const Fixed &ref );
	~Fixed( void );

	Fixed& 	operator=(const Fixed&);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif