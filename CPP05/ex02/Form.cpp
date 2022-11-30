/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:31:35 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/30 15:40:27 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

Form::Form( void ) : _name( "Default" ), _isSigned( 0 ), _signGrade( 1 ), _execGrade( 1 ) {

    std::cout << YEL << " Form's default constructor called " << CRESET << std::endl;
    return ;
}

Form::Form( std::string name, int signGrade, int execGrade ) : _name( name ), _isSigned( 0 ), _signGrade( signGrade ), _execGrade( execGrade ) {

    if ( _signGrade > 150 || _execGrade > 150 )
        throw Form::GradeTooLowException();
    else if ( _signGrade < 1 || _execGrade < 1 )
        throw Form::GradeTooHighException();
    std::cout << YEL "Form's complete constructor called" CRESET << std::endl;
    return ;
}

Form::Form( const Form& ref ) : _signGrade( 1 ), _execGrade( 1 ) {

    *this = ref;
}

Form::~Form( void ) {

    std::cout << MAG << "Form's destructor called" << CRESET << std::endl;
    return ;
}

Form&   Form::operator=( const Form& ref ) {

    if ( this == &ref )
        return ( *this );
    
    std::string *stringPTR = ( std::string* )&this->_name;
    int   *signGrade = ( int* )&this->_signGrade;
    int   *execGrade = ( int* )&this->_execGrade;

    *stringPTR = ref._name;
    *signGrade = ref._signGrade;
    *execGrade = ref._execGrade;
    return ( *this );
}

std::string Form::getName( void ) const {

    return ( _name );
}

bool        Form::getIsSigned( void ) const {

    return ( _isSigned );
}

int        Form::getSignGrade( void ) const {

    return ( _signGrade );
}

int         Form::getExecGrade( void ) const {

    return ( _execGrade );
}

void        Form::beSigned( const Bureaucrat& crat ) {

    if ( crat.getGrade() > _signGrade )
        throw Form::GradeTooLowException();
    else
        this->_isSigned = 1;
}

const char* Form::GradeTooHighException::what ( void ) const throw() {

    return ( REDHB "Grade too high!" CRESET );
}

const char* Form::GradeTooLowException::what ( void ) const throw() {

    return ( REDHB "Grade too low!" CRESET );
}

std::ostream&   operator<<( std::ostream& stream, const Form& Form ) {

    stream << BLU "Form's name is : " << Form.getName() << ", is signed : " << Form.getIsSigned() << ", grade to sign : " << Form.getSignGrade() << ", grade to exec :" << Form.getExecGrade() << "." CRESET;
    return ( stream );
}