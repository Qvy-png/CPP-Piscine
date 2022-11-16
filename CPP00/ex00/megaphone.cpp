/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:19:07 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 17:08:22 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	 //included for std::cout
#include <string>	 //included for std::string

int main ( int argc, char **argv )	{
	
	int			i;
	int			j;	
	char		c;
	
	i = 1;
	if ( argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i <= argc - 1) {
	
		j = 0;
		while (argv[i][j]) {

			c =  toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}