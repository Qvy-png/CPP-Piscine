/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:50:34 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 17:02:20 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void ) {

    return ;
}

A::A( void ) {

    std::cout << BLU "A's default constructor called" CRESET << std::endl;
    return ;
}

B::B( void ) {

    std::cout << YEL "B's default constructor called" CRESET  << std::endl;
    return ;
}

C::C( void ) {

    std::cout << MAG "C's default constructor called" CRESET << std::endl;
    return ;
}

    //////////////////////////////////////
	//									//
	//			  FUNCTIONS				//
	//									//
	//////////////////////////////////////

Base* generate( void ) {

    int i;

    i = std::rand() % 3;

    if ( i == 0 )
        return ( new A() );
    else if ( i == 1 )
        return ( new B() );
    else
        return ( new C() );
}

void    identify( Base* p ) {

    try {
    
        A* a = dynamic_cast<A*>( p );
        if ( a ) {
            
            std::cout << "I'm A" << std::endl;
            return ;
        }
    }
    catch ( std::bad_cast& e ) {
    
    }
    try {
    
        B* b = dynamic_cast<B*>( p );
        if ( b ) {
            
            std::cout << "I'm B" << std::endl;
            return ;
        }
    }
    catch ( std::bad_cast& e ) {
    
    }
    try {
    
        C* c = dynamic_cast<C*>( p );
        if ( c ) {
            
            std::cout << "I'm C" << std::endl;
            return ;
        }
    }
    catch ( std::bad_cast& e ) {
    
    }
}

void identify ( Base& p ) {

    try {
    
        A a = dynamic_cast<A&>( p );
        std::cout << "I'm A" << std::endl;
        return ;
    }
    catch ( std::bad_cast& e ) {
        
    }
    try {
    
        B b = dynamic_cast<B&>( p );
        std::cout << "I'm B" << std::endl;
        return ;
    }
    catch ( std::bad_cast& e ) {
        
    }
    try {
    
        C c = dynamic_cast<C&>( p );
        std::cout << "I'm C" << std::endl;
        return ;
    }
    catch ( std::bad_cast& e ) {
        
    }
}
