/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:25:17 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 15:08:26 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include "color.hpp"

class Weapon {

private:
	
	std::string _type;	

public:

	Weapon( std::string );
	~Weapon( void );
	
	std::string	getType( void ) const;
	void		setType( std::string type );
};

#endif //ending WEAPON_HPP