#include<iostream>
class Animal{
    protected:
    std::string type;
    public:
    virtual std::string getType() const
    {
        return(type);
    }
    virtual void makeSound()const {}
};
class Dog : public Animal{
    public:
    Dog(){type = "Dog";}
    std::string getType() const
    {
        return(type);
    }
    void makeSound() const
    {
        std::cout<<"Woof Woof" << std::endl;
    }
};
class Cat : public Animal{
    public:
    Cat()
    {
        type = "Cat";
    }
    std::string getType() const
    {
        return(type);
    }
    void makeSound() const 
    {
        std::cout<<"meow meow" << std::endl;
    }
};
class WrongAnimal{
    protected:
    std::string type;
    public:
    virtual std::string getType() const
    {
        return(type);
    }
    void makeSound()const
    {
        std::cout << "Wrong Animal sound" << std::endl;
    }
};
class WrongCat: public WrongAnimal
{
    public:
    WrongCat()
    {
        type = "Cat";
    }
    std::string getType() const
    {
        return(type);
    }
    void makeSound() const 
    {
        std::cout<<"meow meow" << std::endl;
    }
};
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}