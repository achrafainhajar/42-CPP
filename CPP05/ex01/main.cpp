#include"Form.hpp"
#include"Bureaucrat.hpp"
int main()
{
    try{
        Bureaucrat a(5,"zab3a");
        Form b("loloa",5,3);
        std::cout <<b;
        std::cout << a;
        a.signForm(b);
        b.beSigned(a);
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}