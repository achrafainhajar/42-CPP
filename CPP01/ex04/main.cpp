#include<iostream>
#include <fstream>
void replace(std::string line,char **argv)
{
    std::string av1 = argv[2];
    std::string av2 = argv[3];
    std::string filename = argv[1];
    std::size_t pos;
    while ((pos = line.find(av1)) != -1) 
    {
        line.erase(pos, av1.length());
        line.insert(pos, av2);
    }
    std::ofstream file;
    file.open(filename + ".replace");
    file << line;
    file.close();
}
int main(int argc,char **argv)
{
    std::string line;
    std::string real_line;
    if(argc == 4)
    {
        int i = 0;
        std::ifstream file(argv[1]);
        if (file.is_open()) {
            while (getline(file, line))
            {
                real_line = real_line + line + "\n";
            }
            replace(real_line,argv);
        }
        else
        {
            std::cout << "Failed to open file!" << std::endl;
        }
    }
    else
        std::cout<<"INVALID ARGUMENTS"<< std::endl;
}