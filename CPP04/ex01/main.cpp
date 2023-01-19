#include<iostream>
class Brain{
    std::string ideas[100];
};
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
    virtual ~Animal()
    {
    }
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
    Animal *lol[10];

    int i= 0;
    while(i < 5)
    {
        lol[i] = new Dog;
        i++;
    }
    while(i < 10)
    {
        lol[i] = new Cat;
        i++;
    }
    i = 0;
    while(i < 10)
    {
        delete lol[i];
        i++;
    }
    while(1);
}