/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:14:13 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/16 11:27:54 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) {

    /////////////////////////////////////////
    //                                     //
    //             Working span            //
    //                                     //
    /////////////////////////////////////////

    try {
        
		Span span1 = Span( 50 );
		span1.addNumber( 6 );
		span1.addNumber( 3 );
		span1.addNumber( 17 );
		span1.addNumber( 9 );
		span1.addNumber( 11 );

        std::cout << std::endl << YEL "Current vector content : " CRESET << std::endl;
        span1.displayVec();
        std::cout << std::endl;

		std::cout << GRN "shortest : " << span1.shortestSpan() << CRESET << std::endl;
		std::cout << GRN "longuest : " << span1.longestSpan() << CRESET << std::endl;
	}
    catch ( std::exception &e ) {
	
    	std::cerr << e.what() << std::endl;
	}

    /////////////////////////////////////////
    //                                     //
    //             Empty span              //
    //                                     //
    /////////////////////////////////////////

    try {

		Span span2 = Span( 0 );

        std::cout << std::endl << YEL "Current vector content : " CRESET << std::endl;
        span2.displayVec();
        std::cout << std::endl;

		std::cout << GRN "shortest : " << span2.shortestSpan() << CRESET << std::endl;
		std::cout << REDHB "You should not see me" CRESET << std::endl;

	}
    catch ( std::exception &e ) {
    
		std::cerr << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    
    /////////////////////////////////////////
    //                                     //
    //             Small span              //
    //                                     //
    /////////////////////////////////////////
    
    try {
        
		Span span3 = Span( 1 );
        span3.addNumber( 1 );
        span3.addNumber( 2 );

		std::cout << REDHB "You should not see me" CRESET << std::endl;
        
	}
    catch ( std::exception &e ) {
        
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl;

    /////////////////////////////////////////
    //                                     //
    //              Twin span              //
    //                                     //
    /////////////////////////////////////////

    try {
		Span span4 = Span( 2 );
        span4.addNumber( 1 );
        span4.addNumber( 1 );

        std::cout << REDHB "You should not see me" CRESET << std::endl;

	}
    catch ( std::exception &e ) {
        
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl;

    /////////////////////////////////////////
    //              Long boi               //
    //                                     //
    //          Oh dear, he long           //
    /////////////////////////////////////////

    try {
        
        int i = 0;
		Span span5 = Span( 10001 );
        std::vector<int> insert;
        
        while ( i < 10000 )
            insert.push_back( i++ );
        span5.addIter( insert.begin(), insert.end() );
		std::cout << GRN "shortest : " << span5.shortestSpan() << CRESET << std::endl;
		std::cout << GRN "longuest : " << span5.longestSpan() << CRESET << std::endl;
	}
    catch ( std::exception &e ) {
	
    	std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}