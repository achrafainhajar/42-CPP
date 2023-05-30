#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange ()
{
}
BitcoinExchange::BitcoinExchange (const BitcoinExchange &a)
{
	*this = a;
}
BitcoinExchange::~BitcoinExchange ()
{
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &a)
{
	(void)a;
	return (*this);
}
void BitcoinExchange::open_data()
{
    std::ifstream file("./data.csv");
	std::string data;
    if (!file) {
        std::cerr << "Failed to open file.\n";
        return ;
    }
	while(!file.eof())
	{
		
	}
	file.close();
}