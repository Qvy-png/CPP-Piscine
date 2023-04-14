/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:17:44 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/03/23 14:26:44 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "color.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

int     printErr( std::string str, int i ) {

    std::cerr << REDHB << str << CRESET << std::endl;
    return ( i );
}

int     main( int argc, char **argv ) {

    std::fstream    csv;
    std::fstream    entryFile;

    if ( argc != 2 )
        return ( printErr( "Wrong amount of arguments!\n./btc NameOfFile", 1 ) );
    //
    csv.open( "data.csv" );
    try
    {
        csv.exceptions( csv.failbit );
    }
    catch( const std::ios_base::failure& e )
    {
        std::cerr << REDHB "Missing initial database, " CRESET;
        return ( printErr( e.what(), 2 ) );
    }
    //
    entryFile.open( argv[1] );
    try
    {
        entryFile.exceptions( entryFile.failbit );
    }
    catch( const std::ios_base::failure& e )
    {
        std::cerr << REDHB "Can't open file, " << CRESET;
        return ( printErr( e.what(), 3 ) );
    }
    std::cout << GRN "Pass" CRESET << std::endl;
    //
    
    return ( 0 ); 
}