/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:00:51 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/05/15 14:23:21 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include "color.hpp"
#include <cstdlib>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <deque>
#include <stdexcept>
#include <iostream>
#include <iomanip>

class PmergeMe {
	
	public:

		PmergeMe( void );
		PmergeMe( const PmergeMe &toCopy );
		PmergeMe &operator=( const PmergeMe &toTheRight );
		~PmergeMe( void );

		void merge_insert_sort_list( int &argc, char **argv );
		void merge_insert_sort_deque( int &argc, char **argv );
		void print_informations( int &argc, char **argv ) const;
		
	private:

		void 			_merge_insert_sort_deque( std::deque<int> &deq );
		void 			_merge_insert_sort_list( std::list<int> &lst );

		std::list<int>	_list;
		double 			_time_list;

		std::deque<int> _deque;
		double 			_time_deque;
};

#endif