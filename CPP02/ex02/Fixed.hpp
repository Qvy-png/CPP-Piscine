/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:31:34 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/11 12:49:38 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

private:

	int					_entier;
	static int const	_constant = 8;

public:

	Fixed( void );
	Fixed( const Fixed& );
	Fixed( const int );
	Fixed( const float );
	~Fixed( void );

	Fixed&				operator=( const Fixed& );
	int					operator>( const Fixed& );
	int					operator<( const Fixed& );
	int					operator>=( const Fixed& );
	int					operator<=( const Fixed& );
	int					operator==( const Fixed& );
	int					operator!=( const Fixed& );
	Fixed				operator+( const Fixed& );
	Fixed				operator-( const Fixed& );
	Fixed				operator*( const Fixed& );
	Fixed				operator/( const Fixed& );
	Fixed				operator++( int );
	Fixed				operator--( int );
	Fixed				operator++( void );
	Fixed				operator--( void );

	int					getRawBits( void ) const;
	void				setRawBits( const int );
	
	float				toFloat( void ) const;
	int					toInt( void ) const;
	
	Fixed&				min( Fixed&, Fixed& );
	Fixed&				max( Fixed&, Fixed& );
	static const Fixed&	min( const Fixed&, const Fixed& );
	static const Fixed&	max( const Fixed&, const Fixed& );
};

std::ostream&	operator<<( std::ostream&, const Fixed& );

#endif