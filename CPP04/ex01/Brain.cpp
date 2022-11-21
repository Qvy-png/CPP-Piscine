/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:55:09 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 13:52:54 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.hpp"

Brain::Brain( void ) {

    std::cout << GRN << "Brain's default constructor called" << CRESET << std::endl;
    return ;
}

Brain::Brain( const Brain &ref ) {

    *this = ref;
    return ;
}

Brain::~Brain( void ) {

    std::cout << GRN << "Brain's destructor called" << CRESET << std::endl;
    return ;
}

Brain&	Brain::operator=( const Brain &ref ) {

	int	i;

	i = 0;
    if ( this == &ref )
		return ( *this );
	while ( i < 100 ) {

		this->_ideas[i] = ref._ideas[i];
		i++;		
	}
    return ( *this );    
}

void	Brain::setIdeas( const std::string ideas, int pos ) {

	int i;

	i = 0;
	if ( pos > 100 )
		std::cout << REDHB << "Position number too high" << CRESET << std::endl;
	else {
	
		while ( i < pos )
			i++;
		_ideas[i] = ideas;
	}
}

std::string	Brain::getIdeas( int pos ) const {

	int	i;

	i = 0;
	if ( pos > 100 )
		std::cout << REDHB << "Position number too high" << CRESET << std::endl;
	else {
	
		while ( i < pos)
			i++;
		return ( _ideas[i] );
	}
	return ( NULL );
}
