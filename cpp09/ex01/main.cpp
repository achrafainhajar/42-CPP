#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <stack>
#include <vector>
#include <stdexcept>

int is_operator(char c)
{
     if(c != '+' && c != '-' && c != '*' && c != '/')
        return 0;
    return 1;
}
void check_args(std::string argv) {
    for(std::size_t i = 0; i < argv.size(); i++) {
        if(!std::isdigit(argv[i]) && !std::isspace(argv[i]) && !is_operator(argv[i])) {
            throw std::runtime_error("Error");
        }
    }
}

double calculate(const std::string& expression) {
    std::stack<double> stack;
    std::string op;
    op = expression;
    int i = 0;
    while (op[i])
    {
        if(op[i] == ' ')
            continue;
        if (op[i] == '+' || op[i] == '-' || op[i] == '*' || op[i] == '/') {
            if (stack.size() < 2)
                throw std::runtime_error("Error");
            double second_nb = stack.top(); 
            stack.pop();
            double first_nb = stack.top();
            stack.pop();

            if (op[i] == '+')
                stack.push(first_nb + second_nb);
            else if (op[i] == '-')
                stack.push(first_nb - second_nb);
            else if (op[i] == '*')
                stack.push(first_nb * second_nb);
            else {
                if (second_nb == 0)
                    throw std::runtime_error("Error division par 0");
                stack.push(first_nb / second_nb);
            }
        }
        else if(std::isdigit(op[i]))
        {
            stack.push(op[i] - '0');
        }
        else
            throw std::runtime_error("Error");
        i++;
    }

    if (stack.size() != 1)
        throw std::runtime_error("Error");
    return stack.top();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    try {
        check_args(argv[1]);
        std::cout << calculate(argv[1]) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
