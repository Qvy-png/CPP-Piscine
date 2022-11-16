/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:00:19 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/24 17:10:50 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TREAT_HPP
# define TREAT_HPP

# include "color.hpp"
# include <iostream>
# include <fstream>

class treat {

private:

	std::string		_fileName;
	std::string		_s1;
	std::string 	_s2;
	
public:

	treat( void );
	treat( const treat &ref );
	~treat( void );

	std::string		filenameGetter( void );
	std::string 	s1Getter( void );
	std::string 	s2Getter( void );
	
	void			filenameSetter( std::string filename );
	void			s1Setter( std::string s1 );
	void			s2Setter( std::string s2 );
};

#endif