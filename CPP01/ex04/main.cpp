/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:35:23 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:34 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treat.hpp"

int needleSearch( std::string hay, std::string needle, int current )
{
	size_t	i;
	size_t	j;
	int		pos;

	i = current;
	pos = 0;
	while (hay[i] != '\0')
	{
		j = 0;
		pos = i;
		while ( hay[i + j] != '\0' && needle[j] != '\0' && hay[i + j] == needle[j] )
		{
			if (needle[j + 1] == '\0')
				return ( pos );
			j++;
		}
		i++;
	}
	return (-1);
}

std::string	replacer( treat treat, std::string newString ) {
	
	int	pos;
	int newOcc;
	
	pos = 0;
	newOcc = 0;
	newOcc = needleSearch( newString, treat.s1Getter(), 0);
	if ( newOcc == -1 )
		return ( newString );
	else {

		newString.erase( newString.begin() + newOcc, newString.begin() + newOcc + treat.s1Getter().size() );
		newString.insert( newOcc, treat.s2Getter() );
		while ( newOcc != -1 ) {

				pos = newOcc + treat.s2Getter().size();
				newOcc = needleSearch( newString, treat.s1Getter(), pos);
				if ( newOcc == -1 )
					return ( newString );
				else {
					
					newString.erase( newString.begin() + newOcc , newString.begin() + newOcc + treat.s1Getter().size() );
					newString.insert( newOcc, treat.s2Getter() );
				}
		}
		return (newString);
	}
}

int 	main( int argc, char **argv ) {

	treat			treat;
	
	std::fstream	file;
	std::fstream	replacedFile;

	std::string		temp;
	std::string		newFile;
	std::string		newString;

    if ( argc != 4 ) {

        std::cout << REDHB << "Wrong number of arguments" << CRESET << std::endl;
    }
	else {

		treat.filenameSetter(argv[1]);
		treat.s1Setter(argv[2]);
		treat.s2Setter(argv[3]);
		file.open( treat.filenameGetter().c_str() );
		if ( !file ) {

			std::cout << REDHB << "Can't open " << treat.filenameGetter() << "." << CRESET << std::endl;
			return (130);			
		}
		newFile.append(treat.filenameGetter());
		newFile.append(".replace");
		replacedFile.open( newFile.c_str(), std::fstream::out);
		if ( !replacedFile ) {
		
			std::cout << REDHB << "Can't create " << newFile << "." << CRESET << std::endl;
			return ( 129 );
		}
		while ( std::getline( file, temp )) {

			newString.append( temp );
			if ( !file.eof() )
				newString.append( "\n" );
		}
		replacedFile << replacer( treat, newString );
		file.close();
		replacedFile.close();
	}
	return (0);
}