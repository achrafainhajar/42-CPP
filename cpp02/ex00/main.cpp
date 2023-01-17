#include <iostream>

class Fixed{
    int value;
    static const int bits = 8;
    public:
    Fixed()
    {
        std::cout<<"Default constructor called"<< std::endl;
        value = 0;
    }
    Fixed(Fixed &ref)
    {
        std::cout<<"Copy constructor called"<< std::endl;
        value = ref.getRawBits();
    }
    ~Fixed()
    {
        std::cout<<"Destructor called"<< std::endl;
    }
    Fixed& operator=(Fixed &ref)
    {
        std::cout<<"Copy assignment operator called"<< std::endl;
        value = ref.getRawBits();
        return *this;
    }
    int getRawBits() const
    {
        std::cout<<"getRawBits member function called"<< std::endl;
        return(value);
    }
    void  setRawBits(int const raw)
    {
        std::cout<<"setRawBits member function called"<< std::endl;
        this->value = raw;
    }

};
int main() 
{
Fixed a;
Fixed b( a );
Fixed c;
c = c;

std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}