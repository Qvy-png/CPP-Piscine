/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:23:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/16 11:27:22 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _size( 0 ), _vec( ) { }

Span::Span( size_t length ) : _size( length ), _vec() { }

Span::Span( const Span& ref ) {

    *this = ref;
}

Span::~Span( void ) { }

Span& Span::operator=( const Span& ref ) {

    if ( this == & ref ) {
        
        return ( *this );
    }
    _size = ref._size;
    _vec = ref._vec;
    return( * this );
}

void    Span::displayVec( void ) {

    std::vector<int>::iterator it1 = _vec.begin();
	std::vector<int>::iterator it2 = _vec.end();
    while(it1 != it2)
        std::cout << CYN << *it1++ << CRESET << std::endl;
}

void    Span::addNumber( size_t i ) {
    
    if ( _vec.size() >= _size )
        throw ( Span::tooMuch() );
    _vec.push_back( i );
}

size_t  Span::longestSpan( void ) {

    if ( _vec.empty() )
        throw Span::noNumber();
    
    size_t ret = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
    return ( ret );
}

size_t  Span::shortestSpan( void ) {

    std::vector<int>::iterator it1 = _vec.begin();
    std::vector<int>::iterator it2 = _vec.end();
    int i = INT_MAX;
    
    if ( _vec.empty() )
        throw Span::noNumber();
    
    for(; it1 != it2; it1++)
	{
		for (std::vector<int>::iterator it3 = (it1 + 1); it3 != it2; it3++)
			if (std::abs(*it1 - *it3) < i)
				i = std::abs(*it1 - *it3);
	}
    return ( i );
}

void    Span::addIter( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {

    if ( std::distance( begin, end ) + _vec.size() >= _size )
        throw ( Span::tooMuchRange() );
    _vec.insert( _vec.end(), begin, end );
}