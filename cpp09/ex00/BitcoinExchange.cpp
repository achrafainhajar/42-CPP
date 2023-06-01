#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& a) {
    btc = a.btc;
}
BitcoinExchange::~BitcoinExchange() {

}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& a) {
    if (this != &a) {
        btc = a.btc;
    }
    return *this;
}
BitcoinExchange::BitcoinExchange(std::map<std::string, float> data) : btc(data) {}


int BitcoinExchange::check_digit(std::string year,std::string month,std::string day)
{
    for(int i =0; year[i] ; i++)
    {
        if(!isdigit(year[i]))
            return 1;
    }
    for(int i =0;month[i] ; i++)
    {
        if(!isdigit(month[i]))
            return 1;
    }
    for(int i =0; day[i] ; i++)
    {
        if(!isdigit(day[i]))
            return 1;
    }
    return 0; 
}
int BitcoinExchange::parsing(const std::string date, float value,std::string line)
{
    std::stringstream s(date);
    std::string year,month,day;
    std::getline(s, year, '-');
    std::getline(s, month, '-');
    std::getline(s, day);
    if(check_digit(year,month,day) || year.size() != 4 || month.size() != 2 || day.size() != 2)
    {
                    std::cerr << "Error: bad input => " << line << "\n";
        return(-1);
    }
    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());
    if((y == 2009 && m == 1 && d < 2)||
       ( y < 2009))
    {
        std::cerr << "no data available on this date" << std::endl;
        return(-1);
    }
    if(m < 1 || d < 1 || m > 12 || d > 31 )
    {
        std::cerr << "bad date" << std::endl;
        return(-1);
    }
    if(m == 2 && d > 28)
    {
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
		{
            if (d > 29)
            {
			    std::cerr << "bad date" << std::endl;
                return(-1);
            }
		}
		else
		{
            if (d > 28)
            {
			    std::cerr << "bad date" << std::endl;
                return(-1);
            }
		}
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if(d > 30)
        {
            std::cerr << "bad date" << std::endl;
            return(-1);
        }
    }
    if(value > 1000)
    {
        std::cerr <<"Error: too large a number."<< std::endl;
        return -1;
    }
    if(value < 0)
    {
        std::cerr <<"Error: not a positive number."<< std::endl;
        return -1;
    }
    return 0;
}
int check_first(std::string line)
{
	std::stringstream ss(line);
	ss >> line;
	if(line != "date")
		return 1;
	ss >> line;
	if(line != "|")
		return 1;
	ss >> line;
	if(line != "value")
		return 1;
	if (ss.fail() || (ss >> line))
		return 1;
	return 0;
}
void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());

    if (!file) {
        std::cerr << "Error: could not open file.\n";
        exit(1);
    }
    //bool status = false;
    std::string line;
    
	std::getline(file, line);
	if(check_first(line))
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
    while (std::getline(file, line)) {
        std::string::size_type pos = line.find(',');
        if (pos != std::string::npos)
            line.replace(pos, 1, ".", 1);
        std::istringstream iss(line);
        std::string date_str;
        char sep;
        float value;
        iss >> date_str;
        iss >> sep;
        iss >> value;
        if (!iss.fail() && !(iss >> date_str)) {
            if(parsing(date_str, value,line) < 0)
                continue;
            std::map<std::string, float>::iterator it = btc.find(date_str);

            if (it == btc.end()) {
                it = btc.lower_bound(date_str);
                --it;
            }

            float exchange_rate = it->second;
            float btc_value = value * exchange_rate;

            std::cout << date_str << " => " << value << " = " << btc_value << "\n";
        } else {
            std::cerr << "Error: bad input => " << line << "\n";
        }
    }
}