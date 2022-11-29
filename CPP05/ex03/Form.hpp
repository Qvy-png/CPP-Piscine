/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:31:10 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/29 17:49:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    
    private:

        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _execGrade;

    public:

        Form( void );
        Form( std::string, int, int );
        Form( const Form& );
        virtual ~Form( void );

        Form& operator=( const Form& );

        std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getSignGrade( void ) const;
		int 		getExecGrade( void ) const;

		void		    beSigned( const Bureaucrat& );
        virtual void    execute( const Bureaucrat& ) const = 0;

        class GradeTooHighException : public std::exception {
        
            public:

                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
        
            public:

                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream&, const Form&);

#endif