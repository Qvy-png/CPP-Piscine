/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:55:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 16:46:38 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int
main ( void ) {

    int i;

    i = 0;
	while ( i < 5 ) {

		std::cout << GRN << " " << i << CRESET << std::endl;
        Base* base = generate();
        identify (base);
        Base& base2 = *(generate());
        identify(base2);
        
        delete base;
        delete &base2;
        i++;
	}
}
