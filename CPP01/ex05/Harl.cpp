/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:18:57 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 15:33:56 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	std::cout << YEL << "Harl's constructor called." << CRESET << std::endl;
}

Harl::Harl( const Harl &ref ) {

	std::cout << YEL << "Harl's constructor by copy called." << CRESET << std::endl;
	*this = ref;
}

Harl::~Harl( void ) {

	std::cout << MAG << "Harl's destructor called." << CRESET << std::endl;
}

void	Harl::debug( void ) {

	std::cout << CYN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << CRESET << std::endl;
}

void	Harl::info( void ) {

	std::cout << CYN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << CRESET << std::endl;
}

void	Harl::warning( void ) {

	std::cout << CYN << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << CRESET << std::endl;
}

void	Harl::error( void ) {

	std::cout << CYN << "This is unacceptable! I want to speak to the manager now." << CRESET<< std::endl;
}

void	Harl::complain( std::string level ) {

	Harl 			harold;
	t_harl			func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		levelString[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i;
	
	i = 0;
	if ( level.empty() ) {
		
		std::cout << REDHB << "LEVEL EMPTY" << CRESET << std::endl;
		return ;
	}
	else {
		
		while ( i < 4 ) {
			
			if (level == levelString[i]) {
				
				(this->*(func[i].f))();
				return;	
			}
			i++;
		}
	}
	std::cout << REDHB << "UNKNOWN LEVEL" << CRESET << std::endl;
}
