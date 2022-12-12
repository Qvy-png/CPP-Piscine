/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:28:05 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/12 13:33:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main( void ) {

    unsigned int size = 10;
    unsigned int i = 0;

    Array<int>   empty( 0 );
    Array<int>   full( size );
    int*         tab = new int[size];
    srand(time(NULL));

    //////////////////////////////////////
    //                                  //
    //     operateur d'assignation      //
    //                                  //
    //////////////////////////////////////

    while ( i < size ) {
    
        const int value = rand();
        full[i] = value;
        tab[i] = value;
        i++;
    }
    
    Array<int> tmp = full;

    i = 0;
    while ( i < size ) {
    
        std::cout << "Array[" << i << "] = " << GRN << full[i] << CRESET ", Tab[" << i << "] = " << GRN << tab[i] << CRESET << std::endl;
        i++;
    }
	
    //////////////////////////////////////
    //                                  //
    //           exceptions             //
    //                                  //
    //////////////////////////////////////
    
    try
    {
        full[-23] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
    try
    {
        full[size] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	try
    {
        full[100000] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete [] tab;
    return 0;
}

