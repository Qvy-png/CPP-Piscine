/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:34:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 13:31:17 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <iostream>
# include <string>
# include <cstring>
# include <ctime>
# include <cstdlib>
# include "color.hpp"


class Contact {

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:

	Contact( void );
	Contact( const Contact &ref );
	~Contact( void );

	std::string getFirstName( void );
	std::string getLastName( void );
	std::string getNickName( void );
	std::string getPhoneNumber( void );
	std::string getDarkestSecret( void );
	void		setFirstName( std::string firstName );
	void		setLastName( std::string lastName );
	void		setNickName( std::string nickName );
	void		setPhoneNumber( std::string phoneNumber );
	void		setDarkestSecret( std::string darkestSecret );
	void		setDateOfCreation( double dateOfCreation );
};

class PhoneBook {
    
private:

	Contact	pages[8];

public:

	PhoneBook( void );
	~PhoneBook( void );
	
	void	add ( int i );
	void	search( int current, int over );
};

std::string	strFormat( std::string string );
void		printingPages( Contact pages, int i );

#endif
