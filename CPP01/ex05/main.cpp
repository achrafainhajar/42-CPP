#include<iostream>
class Harl{
    void debug(void)
    {
        std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
    }
    void info(void)
    {
        std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
    }
    void warning(void)
    {
        std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
    }
    void error(void)
    {
        std::cout<<"This is unacceptable! I want to speak to the manager now."<< std::endl;
    }
    public:
    void (Harl::*tab[4])();
    Harl()
    {
        tab[0] = &Harl::debug;
        tab[1] = &Harl::info; 
        tab[2] = &Harl::warning; 
        tab[3] = &Harl::error; 
    }
    void complain( std::string level)
    {
        int i = 0;
        std::string str[4] = {"DEBUG","INFO","WARNING","ERROR"};
        while(i < 4)
        {
            if(str[i] == level)
            {
                (this->*tab[i])();
                break;
            }
            i++;
        }
    }
};
int main()
{
    Harl haha;
    haha.complain("DEBUG");
    haha.complain("WARNING");
    haha.complain("INFO");
    haha.complain("ERROR");
}