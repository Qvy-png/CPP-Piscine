/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:22:09 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 22:24:53 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Default" ) {

    std::cout << YEL << "Default WrongAnimal constructor called" << CRESET << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( const std::string type ) : _type( type ) {

    std::cout << YEL << "Type WrongAnimal constructor called" << CRESET << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &ref ) {

    *this = ref;
    std::cout << YEL << "WrongAnimal's copy constructor called" << CRESET << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal( void ) {

    std::cout << MAG << "WrongAnimal destructor called" << CRESET << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &ref) {

    this->_type = ref._type;
    return ( *this );
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << BLU << "Default WrongAnimal sound" << CRESET << std::endl;
}

std::string WrongAnimal::getType( void ) const {

	return ( _type );
}

void	WrongAnimal::setType( const std::string type ) {

	_type = type;
}