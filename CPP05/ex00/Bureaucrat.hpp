/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:41 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/22 15:12:00 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "color.hpp"
# include <stdexcept>

class Bureaucrat {

	private:
	
		const std::string	_name;
		unsigned int		_grade;
	
	public:

		Bureaucrat( void );
		Bureaucrat( std::string, unsigned int );
		Bureaucrat( const Bureaucrat& ref );
		~Bureaucrat( void );

		Bureaucrat operator=( const Bureaucrat& ref );

		void			nameSetter( std::string );
		std::string		nameGetter( void ) const;
		void			gradeSetter( unsigned int );
		unsigned int	gradeGetter( void ) const;
};

#endif