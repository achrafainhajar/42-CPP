#include <iostream>
#include<cmath>
class Fixed{
        int value;
    static const int bits = 8;
    public:
    Fixed()
    {
        value = 0;
    }
    Fixed(const int value)
    {
        this->value = value << bits;
    }
    Fixed(const float value)
    {
        this->value = roundf((float)value * (1 << bits));
    }
    Fixed(const Fixed &ref)
    {
        value = ref.getRawBits();
    }
    ~Fixed()
    {
    }
    Fixed& operator=(const Fixed &ref)
    {
        value = ref.getRawBits();
        return *this;
    }
     Fixed operator+(const Fixed &ref) const
    {
        return (Fixed(value + ref.getRawBits()));
    }
     Fixed operator-(const Fixed &ref) const
    {
        return (Fixed(value - ref.getRawBits()));
    }
     Fixed operator*(const Fixed &ref) const
    {
        return (Fixed(toFloat() * ref.toFloat()));
    }
     Fixed operator/(const Fixed &ref) const
    {
        
        return (Fixed(toFloat() / ref.toFloat()));
    }
    bool operator>(const Fixed &ref) 
    {
        return(value > ref.getRawBits());
    }
    bool operator<(const Fixed &ref)
    {
        return(value < ref.getRawBits());
    }
    bool operator>=(const Fixed &ref)
    {
        return(value >= ref.getRawBits());
    }
    bool operator<=(const Fixed &ref)
    {
        return(value <= ref.getRawBits());
    }
    bool operator!=(const Fixed &ref)
    {
        return(value != ref.getRawBits());
    }
    bool operator==(const Fixed &ref)
    {
        return(value == ref.getRawBits());
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
        return(value / (1  << bits));
    }
    Fixed operator++()
    {
            ++value;
            return *this;
    }
    Fixed operator++(int)
    {
        Fixed temp;
        temp.setRawBits(value);
        ++value;
        return (temp);
    }
    Fixed operator--()
    {
            ++value;
            return *this;
    }
    Fixed operator--(int)
    {
            Fixed temp;
            temp.setRawBits(value);
            --value;
            return (temp);
    }
    static Fixed &min(Fixed &a,Fixed &b)
    {
        if(a.getRawBits() > b.getRawBits())
            return(b);
        return(a);
    }
    static const Fixed &min(const Fixed &a,const Fixed &b)
    {
        if(a.getRawBits() > b.getRawBits())
            return(b);
        return(a);
    }
    static Fixed &max(Fixed &a,Fixed &b)
    {
        if(a.getRawBits() < b.getRawBits())
            return(b);
        return(a);
    }
     static const Fixed &max(const Fixed &a,const Fixed &b)
    {
        if(a.getRawBits() < b.getRawBits())
            return(b);
        return(a);
    }
    int toInt( void ) const
    {
        return(value >> bits);
    }
        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
            os << obj.toFloat();
            return os;
        }
};
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}