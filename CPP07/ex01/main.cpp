/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:26:27 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/08 16:33:26 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printSquare(int x)
{
    std::cout << x * x << std::endl;
}

int main( void ) {

    int array[] = {1, 2, 3, 4, 5};
    
    iter(array, 5, printSquare);
    return ( 0 );
}