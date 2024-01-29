#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, float> btc;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& a);
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange& a);
        BitcoinExchange(std::map<std::string, float> data);
        int  check_digit(std::string year,std::string month,std::string day);
        int  parsing(const std::string date, float value,std::string line);
        void processInputFile(const std::string& filename);

    };

#endif