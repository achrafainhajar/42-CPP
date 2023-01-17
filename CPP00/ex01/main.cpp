#include<iostream>
#include<iomanip>
class Contact{
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    public:
    void replace(void)
    {
        std::replace(first_name.begin(), first_name.end(), '\t', ' ');
        std::replace(last_name.begin(), last_name.end(), '\t', ' ');
        std::replace(nickname.begin(), nickname.end(), '\t', ' ');
    }
    void add_to(void)
    {
        std::cout<<"first name: ";
        getline(std::cin,first_name);
        if (!std::cin)
            exit(0);
        std::cout<<"last name: ";
        getline(std::cin,last_name);
        if (!std::cin)
            exit(0);
        std::cout<<"nickname: ";
        getline(std::cin,nickname);
        if (!std::cin)
            exit(0);
        std::cout<<"phone number: ";
        getline(std::cin,phone_number);
        if (!std::cin)
            exit(0);
        std::cout<<"darkest secret: ";
        getline(std::cin,darkest_secret);
        if (!std::cin)
            exit(0);
        replace();
    }
    void to_print(void)
    {
        std::cout<<"first name: ";
        std::cout<<first_name<< std::endl;
        std::cout<<"last name: ";
        std::cout<<last_name<< std::endl;
        std::cout<<"nickname: ";
        std::cout<<nickname<< std::endl;
        std::cout<<"phone number: ";
        std::cout<<phone_number<< std::endl;
        std::cout<<"darkest secret: ";
        std::cout<<darkest_secret<< std::endl;
    }
    void to_print3(void)
    {
        if(first_name.length() > 9)
        {
            std::cout<<first_name.substr(0,9);
            std::cout<< ".";
        }
        else
            std::cout<< std::setw(10)<<first_name;
        std::cout << "|";
        if(last_name.length() > 9)
        {
            std::cout<<last_name.substr(0,9);
            std::cout<< ".";
        }
        else
            std::cout<< std::setw(10)<<last_name;
        std::cout << "|";
        if(nickname.length() > 9)
        {
            std::cout<<nickname.substr(0,9);
            std::cout<< ".";
        }
        else
            std::cout<< std::setw(10)<<nickname;
        std::cout << "|";
        std::cout << std::endl;
    }
};
class PhoneBook{
    Contact Contact[8];
    int i;
    int size;
    public :
    void init(void)
    {
        i = 0;
        size = 0;
    }
    void ADD(void)
    {
        Contact[i].add_to();
        if(size < 8)
            size++;
        i++;
        if(i == 8)
            i = 0;
    }
    void print(int i)
    {
        if(i <= size && i > 0)
            Contact[i - 1].to_print();
        else
            std::cout << "invalid number"<<std::endl;
    }
    void search(void)
    {
        if(size == 0)
        {
            std::cout<<"there is no contact try to add one"<<std::endl;
            return;
        }
        std::string index;
        std::cout<< std::setw(10)<<"index";
        std::cout << "|";
        std::cout<< std::setw(10)<<"first name";
        std::cout << "|";
        std::cout<< std::setw(10)<<"last name";
        std::cout << "|";
        std::cout<< std::setw(10)<<"nickname";
        std::cout << "|";
        std::cout << std::endl;
        int k;
        k = 1;
        while(k <= size)
        {
            std::cout<< std::setw(10)<<k;
            std::cout<<"|";
            Contact[k - 1].to_print3();
            k++;
        }
        std::cout<<"index: ";
        getline(std::cin,index);
        if (!std::cin)
            exit(0);
        int b = 0;
        while(index[b])
        {
            if(!isalpha(index[b]) || index.length() > 2)
            {
                std::cout << "invalid number" << std::endl;
                return;
            }
            b++;
        }
        int num = std::stoi(index);
        print(num);
    }
};
int main(void)
{
    std::string str;
    PhoneBook phone;
    phone.init();
    while(1)
    {
        getline(std::cin,str);
        if (!std::cin)
            exit(0);
        if(!str.compare("ADD"))
            phone.ADD();
        else if(!str.compare("SEARCH"))
            phone.search();
        else if(!str.compare("EXIT"))
            break;
        else
            std::cout << "INVALID ARGUMENT"<<std::endl;
    }
}