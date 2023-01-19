#include<iostream>
class ClapTrap{
    private:
    std::string name;
    int Hit_point;
    int Energy_point;
    int Attack_damage;
    public:
    ClapTrap(std::string name)
    {
        std::cout<<"Default Assigment Constructor Called"<< std::endl;
        this->name = name;
        Hit_point = 10;
        Energy_point = 10;
        Attack_damage = 0;
    }
    void attack(const std::string& target)
    {
        if(!Hit_point || !Energy_point)
        {
            std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
            return;
        }
        Energy_point--;
        std::cout << "ClapTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
    }
    void takeDamage(unsigned int amount)
    {
        if(!Hit_point || !Energy_point)
        {
            std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
            return;
        }
        std::cout << "ClapTrap " <<name << " took "<< amount <<" damage!" << std::endl;
        Hit_point = Hit_point - amount;
    }
    void beRepaired(unsigned int amount)
    {
        if(!Hit_point || !Energy_point)
        {
            std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
            return;
        }
        Hit_point = amount;
        std::cout << "ClapTrap " <<name << "reparing him self" << std::endl;
        Energy_point--;
    }
    ~ClapTrap()
    {
        std::cout << "Destructor Called"<< std::endl;
    }
};
int main()
{
    ClapTrap s1("achraf");
    s1.attack("ch3ayba");
    s1.takeDamage(10);
    s1.attack("ch3ayba");
}