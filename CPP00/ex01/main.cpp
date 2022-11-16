/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:33:17 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 14:51:28 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add( int i ) {
	
	std::string tmp;
	int			j;
	
	j = 0;
	while ( j == 0 ) {
		
		std::cout << std::endl << "- Input first name : ";
		if (!std::getline (std::cin,tmp))
			return ;
		if ( tmp.empty() ) {
			
			std::cout << REDB << "Nothing was input, try again !" << CRESET << std::endl;
		}
		else {
			
			pages[i].setFirstName( tmp );
			j = 1;
		}
	}
	j = 0;
	while ( j == 0 ) {
		
		std::cout << std::endl << "- Input last name : ";
		if (!std::getline (std::cin,tmp))
			return ;
		if ( tmp.empty() ) {
			
			std::cout << REDB << "Nothing was input, try again !" << CRESET << std::endl;
		}
		else {
			
			pages[i].setLastName( tmp );
			j = 1;
		}
	}
	j = 0;
	while ( j == 0 ) {
		
		std::cout << std::endl << "- Input nickname : ";
		if (!std::getline (std::cin,tmp))
			return ;
		if ( tmp.empty() ) {
			
			std::cout << REDB << "Nothing was input, try again !" << CRESET << std::endl;
		}
		else {
			
			pages[i].setNickName( tmp );
			j = 1;
		}
	}
	j = 0;
	while ( j == 0 ) {
		
		std::cout << std::endl << "- Input phone number : ";
		if (!std::getline (std::cin,tmp))
			return ;
		if ( tmp.empty() ) {
			
			std::cout << REDB << "Nothing was input, try again !" << CRESET << std::endl;
		}
		else {
			
			pages[i].setPhoneNumber( tmp );
			j = 1;
		}
	}
	j = 0;
	while ( j == 0 ) {
		
		std::cout << std::endl << "- Input darkest secret : ";
		if (!std::getline (std::cin,tmp))
			return ;
		if ( tmp.empty() ) {
			
			std::cout << REDB << "Nothing was input, try again !" << CRESET << std::endl;
		}
		else {
			
			pages[i].setDarkestSecret( tmp );
			j = 1;
		}
	}	
	std::cout << std::endl << GRN << "CONTACT CREATED !" << CRESET << std::endl;
}

std::string	strFormat( std::string string ) {

	std::string	return_string;
	int			strlen;
	int			i;
	
	i = 0;
	strlen = string.size();
	if (strlen < 10) {
		
		while (i < 10 - strlen){
			
			return_string.append( " " );
			i++;
		}
		return_string.append( string );
	}
	else if ( strlen > 10 ) {
		
		return_string = string;
		return_string.resize( 10 );
		return_string[9] = '.';
	}
	else
		return_string = string;
	return ( return_string );
}

void	printingPages( Contact pages, int i ) {
	
	std::cout << std::endl << "Index : " << i;
	std::cout << std::endl << "First name : " << pages.getFirstName();
	std::cout << std::endl << "Last name : " << pages.getLastName();
	std::cout << std::endl << "Nickname : " << pages.getNickName();
	std::cout << std::endl << "Phone number : " << pages.getPhoneNumber();
	std::cout << std::endl << "Darkest secret : " << pages.getDarkestSecret() << std::endl;
}

int		isNotNum( std::string string ) {
	
	int i;

	i = 0;
	while ( string[i] ) {

		if ( string[i] > '7' || string[i] < '0' )
			return (1);
		i++;
	}
	return (0);
}

void	PhoneBook::search( int current, int over ) {
	
	int			i;
	int			res;
	std::string	tmp;

	i = 0;
	
	if (pages[0].getFirstName().empty()) {
	
		std::cout << REDB << "There is no contact in the PhoneBook yet!" << CRESET << std::endl;
		return ;
	}
	std::cout << GRN << "_____________________________________________" << std::endl <<  "|     Index| FirstName|  LastName|  NickName|" << std::endl << "|----------|----------|----------|----------|" << CRESET <<std::endl;
	if ( over == 0 ) {
		
		while ( i < current ) {

			std::cout << GRN << "|         " << CRESET << i << GRN << "|" << CRESET << strFormat( pages[i].getFirstName() ) << GRN << "|" << CRESET << strFormat( pages[i].getLastName() ) << GRN << "|" << CRESET << strFormat( pages[i].getNickName() ) << GRN << "|" << CRESET << std::endl;
			i++;
		}
	}
	else {
		
		while ( i <= 7 ) {
			
			std::cout << GRN << "|         "<< i << "|"  << CRESET << strFormat( pages[i].getFirstName() ) << GRN << "|" << CRESET << strFormat( pages[i].getLastName() ) << GRN << "|" << CRESET << strFormat( pages[i].getNickName() ) << GRN << "|" << CRESET << std::endl;
			i++;
		}
	}
	std::cout << GRN << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << CRESET << std::endl;
	i = 0;
	while (i != 3) {

		std::cout << std::endl << "Input the index of the contact you want to have details on : ";
		if ( !std::getline( std::cin,tmp ) )
			return ;
		if ( isNotNum( tmp ) == 1 ) {
			
			std::cout << REDB << "Wrong index, input a number in the range : 0-7" << CRESET << std::endl;
			i++;
		}
		else {
			
			res = std::atoi( tmp.c_str() );
			if ( pages[res].getFirstName().empty() ){

				std::cout << REDB << "Index does not exist" << CRESET << std::endl;
				i++;
			}
			else {

				printingPages( pages[res], res );
				i = 3;
			}	
		}
	
	}
}

int main( void ) {
	
    PhoneBook book;
	std::string	input;
	int			is_exit;
	int			i;
	int			over;
	
	i = 0;
	over = 0;
	is_exit = 0;
	std::cout << BLU << "  Hey there, welcome to your very own phonebook!" << std::endl;
	std::cout << "  Input ADD, SEARCH or EXIT" << CRESET << std::endl;
	while ( is_exit == 0 ) {

		if (!std::getline(std::cin, input))
			return (0);
		if ( input.compare( "EXIT" ) == 0 )
			is_exit = 1;
		else if ( input.compare( "SEARCH" ) == 0 ) {
			
			book.search( i, over );
		}
		else if ( input.compare( "ADD" ) == 0) {
	
			if (i > 7) {
				
				i = 0;
				over = 1;
			}
			book.add( i );
			i++;
		}
		else
			std::cout << REDB<< "Wrong input, try : ADD, SEARCH or EXIT" << CRESET<< std::endl;
	}
	return (0);
}