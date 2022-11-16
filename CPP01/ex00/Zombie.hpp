/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:38:16 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 12:25:02 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include "color.hpp"

class Zombie {

private:

	std::string _name;

public:

	Zombie( void );
	Zombie( std::string );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif //ending ZOMBIE_HPP