#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
class BitcoinExchange
{
    private:
        std::map<std::string , float> data;
    public:
        BitcoinExchange ();
        BitcoinExchange (const BitcoinExchange &a);
        ~BitcoinExchange ();
        BitcoinExchange & operator=(const BitcoinExchange &a);
        void open_data(void);
};

#endif