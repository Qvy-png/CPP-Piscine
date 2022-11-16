/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:05:16 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 14:38:54 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>
# include "color.hpp"

class Fixed {

private:

    int 				_entier;
	static const int	_constant = 8;
    
public:

    Fixed( void );
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed &ref );
    ~Fixed( void );
    
    Fixed& 	operator=( const Fixed& );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<( std::ostream&, const Fixed& );
#endif