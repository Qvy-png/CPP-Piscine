/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:06:37 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/30 14:28:56 by rdel-agu         ###   ########.fr       */
/*                                                                          */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include "color.hpp"

class convert {

    private :

		char	_c;
		int		_i;
		float	_f;
		double	_d;

    public :

		convert( void );
		convert( char* );
		// convert( char );
		// convert( int );
		// convert( float );
		// convert( double );
		convert( const convert& );
		~convert( void );

		convert&	operator=( const convert& );
		void		writeDown( const convert& );

};

#endif