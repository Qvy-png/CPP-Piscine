/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/23 16:26:10 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    Bureaucrat *crat = new Bureaucrat();

    //////////////////////////////////////
    //                                  //
    //         Testing increment        //
    //                                  //
    //////////////////////////////////////

    std::cout << " simple increment test" << std::endl;
    try {
        crat->incrementGrade( 10 );
        std::cout << GRN "You should be able to see me" CRESET << std::endl;
    }
    catch ( std::exception & e ) {
        
        std::cout << e.what() << std::endl;
    }
    
    //////////////////////////////////////
    //                                  //
    //         Testing decrement        //
    //                                  //
    //////////////////////////////////////
    
    std::cout << " simple decrement test" << std::endl;
    try {
        crat->decrementGrade( 10 );
        std::cout << GRN "You should be able to see me" CRESET << std::endl;
    }
    catch ( std::exception & e ) {
        
        std::cout << e.what() << std::endl;
    }

    //////////////////////////////////////
    //                                  //
    //      Testing over decrement      //
    //                                  //
    //////////////////////////////////////
    
    std::cout << " decrement over grade" << std::endl;
    try {
        crat->decrementGrade( 10 );
        std::cout << RED "You should not be able to see me" CRESET << std::endl;
    }
    catch ( std::exception & e ) {
        
        std::cout << e.what() << std::endl;
    }

    //////////////////////////////////////
    //                                  //
    //      Testing over increment      //
    //                                  //
    //////////////////////////////////////    

    std::cout << " increment over grade" << std::endl;
    try {
        crat->incrementGrade( 300 );
        std::cout << RED "You should not be able to see me" CRESET << std::endl;
    }
    catch ( std::exception & e ) {
        
        std::cout << e.what() << std::endl;
    }

    delete ( crat );
    return ( 0 );
}