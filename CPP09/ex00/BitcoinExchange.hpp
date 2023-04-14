#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>

class BitcoinExchange {
	
	private:
	
		std::vector<std::pair<std::string, double> > _historical_prices;

	public:
		
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange &toCopy );
		BitcoinExchange& operator=( const BitcoinExchange &toTheRight );
		~BitcoinExchange( void );
		
		void readFile( const std::string &filename );
		void processData( const std::string &inputFile );
		bool isValidInput( const std::string &line, std::string &date, double &value );

};

#endif