/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:15:04 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/29 14:29:56 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "Default", 145, 137 ) {

    std::cout << YEL "ShrubberyCreationForm's default constructor called" CRESET << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string name ) : Form( name, 145, 137 ) {

    std::cout << YEL "ShrubberyCreationForm's name constructor called" CRESET << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& ref ) {

    std::cout << YEL "ShrubberyCreationForm's copy constructor called" CRESET << std::endl;
    *this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

    std::cout << MAG "ShrubberyCreationForm's destructor called" CRESET << std::endl;
    return ;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& exec ) const {

    std::string shrubbery;

    if ( exec.getGrade() > getExecGrade() )
        throw Form::GradeTooLowException();
    else {
    
        std::ofstream ofstream;

        shrubbery = exec.getName() + "_shrubbery";
        ofstream.open( shrubbery.c_str() );
        if ( ofstream.fail() ) {
        
            std::cout << REDHB "Can't create file " << exec.getName() << "_shrubbery" CRESET << std::endl;
            return ;
        }
        ofstream << "       ###" << std::endl
                 << "      #o###"<< std::endl
                 << "    #####o###"<< std::endl
                 << "   #o#\\#|#/###"<< std::endl
                 << "    ###\\|/#o#"<< std::endl
                 << "     # }|{  #"<< std::endl
                 << "       }|{"<< std::endl << std::endl;
        ofstream.close();
    }    
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=( const ShrubberyCreationForm& ref ) {

    if ( this == &ref )
        return ( *this );
    this->Form::operator=( ref );
    return ( *this );
}