#include<iostream>

class Zombie
{
    std::string name;
    public:
    void set(std::string s)
    {
        name = s;
    }
    ~Zombie()
    {
        std::cout << this->name << " has been destroyed" << std::endl;
    }
    std::string get_name() {return this->name;}
    void set_name(std::string namee) {this->name = namee;}
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
    Zombie* zombieHorde( int N, std::string name )
    {
        Zombie *p;
        p = new Zombie[N];
        int i = 0;
        while(i < N)
        {
            p[i].name = name;
            i++;
        }
        return(p);
    }
    void randomChump( std::string name )
    {
        
    }
};
int main()
{  
    Zombie *p;
    int k = 3;
    p = p->zombieHorde(k,"achraf");
    int i = 0;
    while(i < k)
    {
        p[i].announce();
        i++;
    }
    delete [] p;
}