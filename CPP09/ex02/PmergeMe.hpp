
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <sys/time.h>
class PmergeMe{
    std::vector<int> vec;
    std::list<int> lis;
    public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& other);
    void merge_sort_vec(std::vector<int> &tmp);
    void merge_sort_list(std::list<int> &tmp);
    void check_arg(const char* str1);
    void pars(char **argv,int argc);
};
#endif