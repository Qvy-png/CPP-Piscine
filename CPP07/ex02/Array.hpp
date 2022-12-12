/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:28:39 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/12 13:33:06 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include "color.hpp"

template <typename T>
class Array {

    private :

        T*      _array;
		size_t  _size;
        
    public :
    
        Array( void ) : _array( NULL ), _size( 0 ) { };
        
        Array( unsigned int n ) : _array( new T[n] ), _size( n ) { };
        Array( const Array& ref ) { *this = ref; };
        ~Array( void ) { delete[]( _array ); };

        Array& operator=( const Array& ref ) {
        
            size_t i = 0;
            
            _size = ref._size;
            _array = new T[_size];
            while ( i < _size ) {
            
                _array[i] =  ref._array[i];
                i++;
            }
            return ( *this );
        }

        T&  operator[]( int i ) {
        
            if ( i > -1 && static_cast<unsigned int>( i ) < _size )
                return ( _array[i] );
            else
                throw invalidIndex();
        }

        size_t size() const { return( _size ); };
        
        class invalidIndex : public std::exception {
        
            public:

                virtual const char* what() const throw() { return ( REDHB "Invalid index" CRESET ); };
        };
};

#endif