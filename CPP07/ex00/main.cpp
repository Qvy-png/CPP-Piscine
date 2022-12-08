/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:08:50 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/08 16:12:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main( void ) {

// 	int i;
// 	int j;

// 	i = 1;
// 	j = 2;
// 	std::cout << GRN "Before the swap, i = " << i << " and j = " << j << CRESET << std::endl;
// 	swap<int>( i, j );
// 	std::cout << GRN "After the swap, i = " << i << " and j = " << j << CRESET  << std::endl;

// 	std::cout << CYN "The min value out of i and j is : " << min<int>( i, j ) << CRESET  << std::endl;
// 	std::cout << CYN "The max value out of i and j is : " << max<int>( i, j ) << CRESET << std::endl;
// }

int main( void ) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}