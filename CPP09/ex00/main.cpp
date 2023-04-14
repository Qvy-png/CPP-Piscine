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
    BitcoinExchange btcx;

    try
    {
        btcx.readFile("data.csv");
        btcx.processData(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return ( 1 );
    }
    
    return ( 0 ); 
}

// data for test.txt file
// date | value
// 2011-01-03 | 3
// 2011-01-03 | 2
// random
// 2011-01-03 | 1
// 2011-01-03 | 1.2
// 2011-01-09 | 1
// 2012-01-11 | -1
// 2001-42-42
// 2012-01-11 | 1
// 2012-01-11 | 2147483648
// 2001-01-11 | 21
// 2009-01-01 | 21
// 2009-01-02 | 21
// 2023-03-30 | 3
// 2022-04-31 | 3
// 2023-03-20 | 3
// 2024-03-20 | 3
// 2010-11-16 | 10 