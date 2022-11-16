/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:30:38 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 22:45:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {

    std::cout << YEL << "WrongCat's default constructor called" << CRESET << std::endl;
    return ;
}

WrongCat::WrongCat( const WrongCat &ref) {

    *this = ref;
    return ;
}

WrongCat::~WrongCat( void ) {

    std::cout << MAG << "WrongCat's destructor called" << CRESET << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &ref ) {

    _type = ref._type;
    return ( *this );
}

void    WrongCat::makeSound( void ) const {

    std::cout << BLU << "Chirp!!" << CRESET << std::endl;
}