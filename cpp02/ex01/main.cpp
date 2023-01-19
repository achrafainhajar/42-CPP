#include <iostream>
#include <cmath>
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
    Fixed(const int value)
    {
        std::cout<<"Int constructor called"<< std::endl;
        this->value = value << bits;
    }
    Fixed(const float value)
    {
        std::cout<<"Float constructor called"<< std::endl;
        this->value = value * (1 << bits);
    }
    Fixed(const Fixed &ref)
    {
        std::cout<<"Copy constructor called"<< std::endl;
        value = ref.getRawBits();
    }
    ~Fixed()
    {
        std::cout<<"Destructor called"<< std::endl;
    }
    Fixed& operator=(const Fixed &ref)
    {
        std::cout<<"Copy assignment operator called"<< std::endl;
        value = ref.getRawBits();
        return *this;
    }
    int getRawBits() const
    {
        return(value);
    }
    void  setRawBits(int const raw)
    {
        this->value = raw;
    }
    float toFloat( void ) const
    {
        return((float)value / (float)(1  << bits));
    }
    int toInt( void ) const
    {
        return(value >> bits);
    }
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
            os << obj.toFloat();
            return os;
        }
int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );

a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}