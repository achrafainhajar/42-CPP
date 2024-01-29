#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <stack>
#include <vector>
#include <stdexcept>

int is_operator(char c);
void check_args(std::string argv);
double calculate(const std::string& expression);

#endif