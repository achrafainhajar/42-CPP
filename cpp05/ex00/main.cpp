#include <iostream>

class GradeTooHighException {
   int grade;
public:
GradeTooHighException(){}
    GradeTooHighException(int grd) : grade(grd){}
    std::string what() {
        std::string message = "Your Grade " + std::to_string(grade) + " is too High";
        return message;
    }
};
class GradeTooLowException {
    int grade;
public:
GradeTooLowException(){}
    GradeTooLowException(int grd) : grade(grd){}
    std::string what() const{
        std::string message = "Your Grade " + std::to_string(grade) + " is too Low";
        return message;
    }
};

class Bureaucrat{
    const std::string name;
     int grade;
    public:
    Bureaucrat(){
        std::cout<< "Default Constructor Called" << std::endl;
    }
    Bureaucrat(int grade,std::string name): name(name){
        this->grade = grade;
        if(grade > 150)
            throw GradeTooLowException(grade);
        if(grade < 1)
            throw GradeTooHighException(grade);
    }
    std::string get_Name() const
    {
        return(this->name);
    }

    int get_Grade() const 
    {
        return(this->grade);
    }

    void increment()
    {
        this->grade--;
        if(grade < 1)
            throw GradeTooHighException(grade);
    }
    void decrement()
    {
        this->grade++;
        if(grade > 150)
            throw GradeTooLowException(grade);
    }
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a) {
        out << a.get_Name() << ", bureaucrat grade " << a.get_Grade() << std::endl;
        return out;
    }
int main()
{
    try{
    Bureaucrat a(1,"af3a");
    Bureaucrat b(150,"zab3a");
    std::cout <<b;
    b.increment();
    std::cout <<b;
    b.decrement();
    std::cout <<b;
    std::cout << a;
    a.increment();
    }
    catch(GradeTooHighException &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    catch(GradeTooLowException &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}