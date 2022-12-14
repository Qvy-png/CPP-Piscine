/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:21:36 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 14:38:24 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

    std::cout << YEL << "Cat's default constructor called" << CRESET << std::endl;
    return ;
}

Cat::Cat( const Cat &ref ) : Animal( ref ) {

    *this = ref;
    return ;
}

Cat::~Cat( void ) {

    std::cout << MAG << "Cat's destructor called" << CRESET << std::endl;
}

Cat& Cat::operator=( const Cat &ref ) {

    _type = ref._type;
    return ( *this );
}

void    Cat::makeSound( void ) const {

    std::cout << BLU << "Meow!!" << CRESET << std::endl;
}