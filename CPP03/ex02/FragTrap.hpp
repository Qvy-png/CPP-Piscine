/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:57:20 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 12:59:38 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :

	FragTrap( void );
	FragTrap( std::string );
	FragTrap( const FragTrap &ref);
	~FragTrap( void );
	
	FragTrap&	operator=( const FragTrap& );

	void highFivesGuys( void );
};


#endif