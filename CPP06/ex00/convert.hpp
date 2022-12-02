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
# include <stdlib.h>

# include "color.hpp"

class Convert {

    private :

		char	_c;
		bool	_cOver;

		int		_i;
		bool	_iOver;
		
		float	_f;
		bool	_fOver;

		double	_d;
		bool	_dOver;

		bool	_infPos;
		bool	_infNeg;
		bool	_nan;
		bool	_err;

    public :

		Convert( void );
		Convert( std::string& );
		Convert( const Convert& );
		~Convert( void );

		Convert&	operator=( const Convert& );

		void		convertChar( std::string& );
		void		convertInt( std::string& );
		void		convertFloat( std::string& );
		void		convertDouble( std::string& );

		void		putChar( void ) const;
		void		putInt( void ) const;
		void		putFloat( void ) const;
		void		putDouble( void ) const;

		void		infoPrinter( void ) const;

};

#endif