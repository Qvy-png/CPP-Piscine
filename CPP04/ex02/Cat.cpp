/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:21:36 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 14:18:13 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

    std::cout << YEL << "Cat's default constructor called" << CRESET << std::endl;
    _ideas = new Brain();
    return ;
}

Cat::Cat( const Cat &ref ) : Animal( ref ) {

    *this = ref;
    _ideas = new Brain();
    return ;
}

Cat::~Cat( void ) {

    std::cout << MAG << "Cat's destructor called" << CRESET << std::endl;
    delete( _ideas );
    return ;
}

Cat& Cat::operator=( const Cat &ref ) {

    if ( this == &ref )
        return ( *this );
    _type = ref._type;
    return ( *this );
}

void    Cat::makeSound( void ) const {

    std::cout << BLU << "Meow!!" << CRESET << std::endl;
}

std::string	Cat::getIdeas( int pos ) const {

	return ( _ideas->getIdeas( pos ) );
}

void	Cat::setIdeas( std::string idea, int pos ) {

    _ideas->setIdeas( idea, pos );
}
