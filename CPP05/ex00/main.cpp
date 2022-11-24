/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/24 14:27:54 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    Bureaucrat *crat;
    
    crat = new Bureaucrat("Jacques", 1);

    //////////////////////////////////////
    //                                  //
    //         Testing increment        //
    //                                  //
    //////////////////////////////////////

    std::cout << " simple incrementGrade( 10 ) test on " << *crat << std::endl;
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
    
    std::cout << " simple decrementGrade( 10 ) test on " << *crat << std::endl;
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
    
    std::cout << " decrement over grade of 10 on " << *crat << std::endl;
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

    std::cout << " increment over grade of 300 on " << *crat << std::endl;
    try {
        crat->incrementGrade( 300 );
        std::cout << RED "You should not be able to see me" CRESET << std::endl;
    }
    catch ( std::exception & e ) {
        
        std::cout << e.what() << std::endl;
    }

    delete( crat );
    return ( 0 );
}