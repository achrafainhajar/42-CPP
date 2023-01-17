#include<iostream>

int main(int argc,char **argv)
{
    int i = 0;
    char ch;
    int j = 1;
    if(argc > 1)
    {
        while(argv[j])
        {
            i = 0;
            while(argv[j][i])
            {
                ch = toupper(argv[j][i]);
                std::cout << ch;
                i++;
            }
            j++;
        }
    }
    else
    {
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
}