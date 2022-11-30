/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:35:06 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/30 14:57:16 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert( void ) : _c( NULL ), _i( NULL ), _f( NULL ), _d( NULL ){

    std::cout << YEL "convert's default constructor called" CRESET << std::endl;
    return ;
}

convert::convert( char *str ) {

    std::cout << YEL "convert's char pointer constructor called" CRESET << std::endl;
    return ;
}

// convert::convert( char type ) : _c( type ) {

//     std::cout << YEL "convert's char constructor called" CRESET << std::endl;
//     _i = ( int )type;
//     return;
// }




convert::convert( const convert& ref ) {

    std::cout << YEL "convert's copy constructor called" CRESET << std::endl;
    _c = ref._c;
    _i = ref._i;
    _f = ref._f;
    _d = ref._d;
    
}