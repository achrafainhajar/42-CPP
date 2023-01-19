#include<iostream>
class Brain{
    std::string ideas[100];
};
#include<iostream>
class Animal{
    protected:
    std::string type;
    public:
    Animal()
    {

    };
    virtual std::string getType() const = 0;
    virtual void makeSound()const = 0;
};
class Dog : public Animal{
    private:
    Brain *brain;
    public:
    Dog()
    {
        brain = new Brain;
       type = "Dog";
    }
    std::string getType() const
    {
        return(type);
    }
    void makeSound() const
    {
        std::cout<<"Woof Woof" << std::endl;
    }
    ~Dog()
    {
        std::cout << "Dog destruction called" <<std::endl;
        delete brain;
    }
};
class Cat : public Animal{
    private:
    Brain *brain;
    public:
    Cat()
    {
        brain = new Brain;
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
    ~Cat()
    {
        std::cout << "Cat destruction called" <<std::endl;
        delete brain;
    }
};

int main()
{
const Animal *j = new Dog();
const Animal *i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
return 0;
}