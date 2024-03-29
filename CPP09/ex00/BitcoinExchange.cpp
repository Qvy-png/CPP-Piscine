#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange( void ) {

	return;
}

BitcoinExchange::~BitcoinExchange( void ) {

	return;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &toCopy ) {
	
	*this = toCopy;
	return;
}

BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &toTheRight ) {
	
    if (this == &toTheRight) {
        return *this;
    }
	this->_historical_prices = toTheRight._historical_prices;
    return *this;
}

void BitcoinExchange::readFile( const std::string &filename ) {
	
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
		throw std::runtime_error("could not open " + filename);
        return;
    }

    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string date;
        double price;
        std::getline(ss, date, ',');
		ss >> price;
        this->_historical_prices.push_back(std::make_pair(date, price));
    }

    file.close();
    return;
}

bool BitcoinExchange::isValidInput(const std::string& line, std::string& date, double& value) {
    std::stringstream ss(line);
    getline(ss, date, '|');
    if (date.length() != 11) {
		
		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}

	
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 1822 || year > 2023) {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}

	if (month < 1 || month > 12) {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}

	int daysInMonth[] = {31, 28 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day < 1 || day > daysInMonth[month - 1]) {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}
	
	// say bitcoin did not exist
	if (year < 2009) {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}

	// say bitcoin did not exist
	if ( year == 2009 && month == 01 && day == 1) {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}
    
	// check if valur is a positive integer or the format is bad
	if(ss >> value) {
		if (value < 0 || value > 1000) {
			
			if (value < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else
				std::cerr << "Error: too large a number." << std::endl;
			return false;
		}
		return true;
	} else {

		std::cerr << "Error: bad input => " << line << std::endl;
        return false;
	}
	return true;
}

void BitcoinExchange::processData(const std::string& inputFile) {
    std::ifstream file(inputFile.c_str());
    if (!file.is_open()) {
		throw std::runtime_error("could not open " + inputFile);
        return;
    }

    std::string line;

	// skip date | value
    getline(file, line); 

    while (getline(file, line)) {
        
		std::string date;
        double value;

        if (isValidInput(line, date, value)) {
			
			std::vector<std::pair<std::string, double> >::iterator it = std::lower_bound(this->_historical_prices.begin(),
																						  this->_historical_prices.end(),
																						  std::make_pair(date, 0.0));
			if (it != this->_historical_prices.begin())
				--it;
			double exchange_rate = it->second;
			double result = value * exchange_rate;
			std::cout << date << " => " << static_cast<int>(value) << " = " << std::fixed << std::setprecision(2) << result << std::endl;
		}
    }
    file.close();
}