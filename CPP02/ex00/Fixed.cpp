/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:14:20 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/13 11:26:04 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {

	std::cout << YEL << "Default constructor called" << CRESET << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &ref ) {

	std::cout << YEL << "Copy constructor called" << CRESET << std::endl;
	*this = ref;
}

Fixed::~Fixed( void ){
	
	std::cout << MAG << "Destructor called" << CRESET << std::endl;
	return;
}

Fixed&	Fixed::operator=(const Fixed &ref) {

	std::cout << GRN <<  "Copy assignement operator called" << CRESET << std::endl;
	_entier = ref.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {

	std::cout << BLU << "getRawBits member function called" << CRESET << std::endl;
	return ( _entier );
}

void	Fixed::setRawBits( const int raw ) {

	_entier = raw;
}