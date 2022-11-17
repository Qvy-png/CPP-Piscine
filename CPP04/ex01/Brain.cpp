/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:55:09 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 15:58:36 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

    std::cout << "Brain's default constructor called" << std::endl;
    return ;
}

Brain::Brain( const Brain &ref ) {

    *this = ref;
    return ;
}

Brain::~Brain( void ) {

    std::cout << "Brain's destructor called" << std::endl;
    return ;
}

Brain&	Brain::operator=( const Brain &ref ) {

    _ideas = ref._ideas;
    return ( *this );    
}

