/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:26:38 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 22:49:22 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Default" ) {

    std::cout << YEL << "Default Animal constructor called" << CRESET << std::endl;
    return ;
}

Animal::Animal( const std::string type ) : _type( type ) {

    std::cout << YEL << "Type Animal constructor called" << CRESET << std::endl;
    return ;
}

Animal::Animal( const Animal &ref ) {

    *this = ref;
    std::cout << YEL << "Animal's copy constructor called" << CRESET << std::endl;
    return ;
}

Animal::~Animal( void ) {

    std::cout << MAG << "Animal destructor called" << CRESET << std::endl;
    return ;
}

Animal& Animal::operator=( const Animal &ref) {

    this->_type = ref._type;
    return ( *this );
}

void	Animal::makeSound( void ) const {

	std::cout << BLU << "Default Animal sound" << CRESET << std::endl;
}

std::string Animal::getType( void ) const {

	return ( _type );
}

void	Animal::setType( const std::string type ) {

	_type = type;
}