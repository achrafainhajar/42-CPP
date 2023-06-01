#include "BitcoinExchange.hpp"


std::map<std::string, float> readData(const std::string& filename)
{
    std::map<std::string, float> data;
    std::ifstream file(filename.c_str());
    float nb;
    if (!file) {
        std::cerr << "Error: could not open file.\n";
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
int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "bad arguments\n";
        return 1;
    }
    {
        BitcoinExchange btc(readData("data.csv"));
        btc.processInputFile(argv[1]);
    }

    return 0;
}
