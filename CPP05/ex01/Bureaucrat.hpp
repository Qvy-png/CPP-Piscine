/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:41 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 19:16:27 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "color.hpp"
# include <stdexcept>
# include <iostream>
# include <string>
# include "Form.hpp"

class Bureaucrat {

	private:
	
		const std::string	_name;
		int					_grade;
	
	public:

		Bureaucrat( void );
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat& ref );
		~Bureaucrat( void );

		Bureaucrat&			operator=( const Bureaucrat& ref );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;
		
		void				incrementGrade( int );
		void				decrementGrade( int );

		void				signForm( Form& );

		class GradeTooHighException : public std::exception {
		
			public:
			
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			
			public:
				
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<( std::ostream&, const Bureaucrat& );

#endif