#include<iostream>

class Zombie
{
    std::string name;
    public:
    Zombie(){}
    Zombie(std::string namee)
    {
        this->name = namee;
    }
    void set(std::string s)
    {
        name = s;
    }
    void announce( void )
    {
        std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
    }
    Zombie* newZombie( std::string name )
    {
        Zombie *p;
        p = new Zombie;
        p->name = name;
        return(p);
    }
    void randomChump( std::string name )
    {
        Zombie p(name);
        p.announce();
    }
};
int main()
{
    Zombie haha;
    Zombie *haha1;
    haha1 = haha1->newZombie("sss");
    haha1->announce();
    haha.randomChump("f");
    haha.randomChump("fadfsa");
    haha.randomChump("ffdsaf");
    haha.randomChump("aaff");
}