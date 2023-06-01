#include "PmergeMe.hpp"
int main(int argc,char **argv)
{
    PmergeMe a;
    if(argc <= 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << "Before: ";
    if(argc <= 6)
    {
        for(int i = 1;i < argc;i++)
            std::cout << argv[i]<<" ";
    }
    else
    {
        for(int i = 1;i <= 5;i++)
            std::cout << argv[i]<<" ";
        std::cout <<"[...]";
    }
    std::cout << "\n";
    a.pars(argv,argc);

}