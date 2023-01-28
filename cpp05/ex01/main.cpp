#include"Form.hpp"
#include"beref.hpp"
int main()
{
    try{
    Bureaucrat a("af3a",5);
    Form b("lolo",5,3);
    std::cout <<b;
    std::cout << a;
    b.beSigned(a);
    a.signForm(b);
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}