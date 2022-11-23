/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:41 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/23 15:27:27 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "color.hpp"
# include <stdexcept>
# include <iostream>
# include <string>

class Bureaucrat {

	private:
	
		const std::string	_name;
		int					_grade;
	
	public:

		Bureaucrat( void );
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat& ref );
		~Bureaucrat( void );

		Bureaucrat			operator=( const Bureaucrat& ref );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;
		
		void				incrementGrade( void );
		void				decrementGrade( void );

		std::exception		GradeTooHighException( void );
		std::exception		GradeTooLowException( void );
};

#endif