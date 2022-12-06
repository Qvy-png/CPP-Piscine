/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:59:28 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 14:43:10 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : _data("Default") {

    return ;
}

Data::Data( std::string const data) : _data( data ) {

    return ;
}

Data::Data( const Data& ref ) {

    *this = ref;
}

Data::~Data( void ) {

    return ;
}

Data& Data::operator=( const Data& ref ) {

    this->_data = ref._data;
    return ( *this );
}

std::string Data::getData( void ) const {

    return ( _data );
}