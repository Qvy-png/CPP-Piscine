/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:54:21 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/14 12:21:23 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyFind.hpp"

int main( void ) {

    std::vector<int>    vec;
    int                 i = 0;
    
    while ( i < 5 ) {
    
        vec.push_back( i );
        i++;
    }
    try
    {
        easyFind( vec, 2 );
        std::cout << GRN "You should see me" CRESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        easyFind( vec, 9 );
        std::cout << RED "You should not see me" CRESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}