/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:08 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 12:30:52 by rdel-agu         ###   ########.fr       */
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
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif  //ending ZOMBIE_HPP