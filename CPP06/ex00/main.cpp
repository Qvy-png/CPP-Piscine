/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:06:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/05 14:54:23 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main( int argc, char** argv ) {

    std::string	arg;
	Convert*	convert;

    if ( argc != 2 ) {

        std::cout << REDHB "Invalid number of arguments! Please write the following : ./convert [value]" CRESET << std::endl;
        return ( 130 );        
    }
    else {

		arg = argv[1];
        convert = new Convert( arg );
		convert->infoPrinter();

		delete ( convert );
    }
    
    return ( 0 );
}