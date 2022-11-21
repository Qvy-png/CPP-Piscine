/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:01:55 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 14:16:36 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {

    std::cout << YEL << "Dog's default constructor called" << CRESET << std::endl;
    _ideas = new Brain();
    return ;
}

Dog::Dog( const Dog &ref) : Animal( ref ) {

    *this = ref;
    _ideas = new Brain();
    return ;
}

Dog::~Dog( void ) {

    std::cout << MAG << "Dog's destructor called" << CRESET << std::endl;
    delete( _ideas );
    return ;
}

Dog& Dog::operator=( const Dog &ref ) {

    if (this == &ref)
        return *this;
    _type = ref._type;
    return ( *this );
}

void    Dog::makeSound( void ) const {

    std::cout << BLU << "Woof!!" << CRESET << std::endl;
}

std::string	Dog::getIdeas( int pos ) const {

	return ( _ideas->getIdeas( pos ) );
}

void	Dog::setIdeas( std::string idea, int pos ) {

    _ideas->setIdeas( idea, pos );
}
