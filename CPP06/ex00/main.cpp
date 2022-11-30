/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:06:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/30 14:27:22 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


int main( int argc, char** argv ) {

    ( void )argv;
    if ( argc > 2 || argc == 1 ) {

        std::cout << REDHB "Invalid number of arguments! Please write the following : ./convert [value]" CRESET << std::endl;
        return ( 130 );        
    }

    
    return ( 0 );
}