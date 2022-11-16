/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:18:59 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 12:52:32 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "color.hpp"
# include <iostream>
# include <fstream>

class Harl {

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:

	std::string level;
	
	Harl( void );
	Harl( const Harl &ref );
	
	~Harl( void );

	void	complain( std::string );

};

typedef struct s_harl {

	void ( Harl::*f )( void );
} t_harl;

#endif