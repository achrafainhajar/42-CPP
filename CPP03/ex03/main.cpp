#include<iostream>
class ClapTrap{

    protected:
        std::string name;
        int Hit_point;
        int Energy_point;
        int Attack_damage;
    public:
    ClapTrap(void)
    {

    }
    ClapTrap(std::string name)
    {
        std::cout<<"ClapTrap Default Assigment Constructor Called"<< std::endl;
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
        std::cout << "ClapTrap Destructor Called"<< std::endl;
    }
};
class ScavTrap : public virtual ClapTrap {
    public:
    ScavTrap(void)
    {

    }
    ScavTrap(std::string name): ClapTrap(name)
    {
        std::cout<<"ScavTrap Default Assigment Constructor Called"<< std::endl;
        Hit_point = 100;
        Energy_point = 50;
        Attack_damage = 20;
    }
    ~ScavTrap()
    {
        std::cout << "ScavTrap Destructor Called"<< std::endl;
    }
    void guardGate()
    {
       std::cout<<"ScavTrap in now in Gate keeper mode "<<std::endl;
    }
    void attack(const std::string& target)
    {
        if(!Hit_point || !Energy_point)
        {
            std::cout << "ScavTrap "<<name<<" is Dead"<< std::endl;
            return;
        }
        Energy_point--;
        std::cout << "ScavTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
    }
};
class FragTrap : public virtual ClapTrap {
    public:
    FragTrap()
    {
    }
    FragTrap(std::string name): ClapTrap(name)
    {
        std::cout<<"FragTrap Default Assigment Constructor Called"<< std::endl;
        Hit_point = 100;
        Energy_point = 100;
        Attack_damage = 30;
    }
    ~FragTrap()
    {
        std::cout << "FragTrap Destructor Called"<< std::endl;
    }
    void highFivesGuys(void)
    {
        std::cout << "Let's give each other a high five!" << std::endl;
    }
    void attack(const std::string& target)
    {
        if(!Hit_point || !Energy_point)
        {
            std::cout << "FragTrap "<<name<<" is Dead"<< std::endl;
            return;
        }
        Energy_point--;
        std::cout << "FragTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
    }
};
class DiamondTrap :  public ScavTrap, public FragTrap{
    private:
    std::string name;
    public:
    DiamondTrap()
    {
    }
    DiamondTrap(std::string name) : ClapTrap(name)
    {
        std::cout<<"DiamondTrap Default Assigment Constructor Called"<< std::endl;
        Hit_point = 100;
        Energy_point = 50;
        Attack_damage = 30;
    }
    ~DiamondTrap()
    {
        std::cout << "DiamondTrap Destructor Called"<< std::endl;
    }
    void highFivesGuys(void)
    {
        std::cout << "Let's give each other a high five!" << std::endl;
    }
    void attack(const std::string& target)
    {
        ScavTrap::attack(target);
    }
};
int main(void)
{
    DiamondTrap d;
	DiamondTrap a( "XD" );
	DiamondTrap b( "Alfonso" );
	d.attack("Me");
}