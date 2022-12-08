/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:41:20 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/08 14:49:29 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include "color.hpp"

template<typename T>
void	swap( T& a, T& b ) {

	T	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min( T a, T b ) {

	if ( a < b )
		return ( a );
	else
		return ( b );
}

template<typename T>
T	max( T a, T b ) {

	if ( a > b )
		return ( a );
	else
		return ( b );
}

#endif