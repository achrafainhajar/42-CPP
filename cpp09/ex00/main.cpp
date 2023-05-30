#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

std::map<std::string, float> btc;

std::map<std::string, float> readData(const std::string& filename) {
    std::map<std::string, float> data;
    std::ifstream file(filename.c_str());
    float nb;
    if (!file) {
        std::cerr << "Failed to open BTC database file.\n";
        exit(1);
    }

std::string line;
   getline(file,line);
   while(getline(file, line))
 	{
			size_t  size = line.find(',');
			std::istringstream(line.substr(size + 1,line.size())) >> nb;
			data[line.substr(0, size)] = nb;
	}

    return data;
}
int parsing(const std::string date, float value)
{    
    std::stringstream s(date);
    std::string year,month,day;
    std::getline(s, year, '-');
    std::getline(s, month, '-');
    std::getline(s, day, '-');

    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());
    if(y == 2009 && m == 1 && d < 2 || (y == 2022) && ((m == 3 && d > 29) || m > 3)||
        y < 2009 || y > 2022)
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
            if (d > 29)
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
        std::cerr <<"value is too large"<< std::endl;
        return -1;
    }
    if(value < 0)
    {
        std::cerr <<"value is not positive"<< std::endl;
        return -1;
    }
    return 0;
}
void processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());

    if (!file) {
        std::cerr << "Error: could not open file.\n";
        exit(1);
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date_str;
        float value;

        if (std::getline(iss, date_str, '|')) {
            iss >> value;
            if(parsing(date_str, value) < 0)
                continue;
            std::map<std::string, float>::iterator it = btc.find(date_str);

            if (it == btc.end()) {
                it = btc.upper_bound(date_str);
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

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "bad arguments\n";
        return 1;
    }

    btc = readData("data.csv");
    processInputFile(argv[1]);

    return 0;
}
