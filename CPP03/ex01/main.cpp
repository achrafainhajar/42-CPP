#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
int main()
{
    ScavTrap s1("achraf");
    s1.guardGate();
    ClapTrap s2("ch3ayba");
    s1.attack(s2.getter());
    s2.takeDamage(20);
    s2.attack(s1.getter());
    s1.takeDamage(20);
    s2.attack(s1.getter());
    s1.takeDamage(20);
    s2.attack(s1.getter());
    s1.takeDamage(20);
    s2.attack(s1.getter());
    s1.takeDamage(20);
    s2.attack(s1.getter());
    s1.takeDamage(20);
    s1.beRepaired(100);
}