#include <iostream>

class Weapon{
    std::string type;
    public:
    Weapon(void)
    {

    }
    Weapon(std::string type)
    {
        this->type = type;
    }
    const std::string &getType(void)
    {
        std::string &ref = type;
        return(ref);
    }
    void setType(std::string str)
    {
        this->type = str;
    }
};
class HumanA{
    std::string name;
    Weapon &weapon;
    public:
    HumanA(std::string str,Weapon &club) : weapon(club) , name(str)
    {
    }
    void attack()
    {
        std::cout<<name<< " attacks with their "<< weapon.getType()<<std::endl;
    }
};
class HumanB{
    std::string name;
    Weapon *weapon;
    public:
    HumanB(std::string str)
    {
        name = str;
    }
    void setWeapon(Weapon &weapon)
    {
        this->weapon= &weapon;
    }
    void attack()
    {
        std::cout<<name<< " attacks with their "<< weapon->getType()<<std::endl;
    }
};
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
        {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}