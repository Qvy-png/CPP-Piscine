/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:01:55 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 14:22:09 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {

    std::cout << YEL << "Dog's default constructor called" << CRESET << std::endl;
    return ;
}

Dog::Dog( const Dog &ref) : Animal( ref ) {

    *this = ref;
    return ;
}

Dog::~Dog( void ) {

    std::cout << MAG << "Dog's destructor called" << CRESET << std::endl;
}

Dog& Dog::operator=( const Dog &ref ) {

    if (this == &ref) {return *this;}
    _type = ref._type;
    return ( *this );
}

void    Dog::makeSound( void ) const {

    std::cout << BLU << "Woof!!" << CRESET << std::endl;
}