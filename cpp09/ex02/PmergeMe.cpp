#include "PmergeMe.hpp"
PmergeMe::PmergeMe() {
}
PmergeMe::PmergeMe(const PmergeMe& other) : vec(other.vec), lis(other.lis) {
}
PmergeMe::~PmergeMe() {
}
PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        vec = other.vec;
        lis = other.lis;
    }
    return *this;
}
void PmergeMe::merge_sort_vec(std::vector<int> &tmp)
{
    if(tmp.size() <= 1)
        return;
    std::vector<int> left;
    std::vector <int>::iterator middle = tmp.begin() + (tmp.end() - tmp.begin()) / 2;
    std::vector<int> right;
    left.reserve(tmp.size() / 2);
    right.reserve(tmp.size() - tmp.size() / 2);
    left.insert(left.begin(),tmp.begin(),middle);
    right.insert(right.begin(),middle,tmp.end());
    tmp.clear();
    merge_sort_vec(left);
    merge_sort_vec(right);
    tmp.reserve(left.size() + right.size());
    std::vector<int>::iterator left1 = left.begin();
    std::vector<int>::iterator right1 = right.begin();
    
    while (left1 != left.end() && right1 != right.end())
    {
        if (*left1 >= *right1)
        {
            tmp.push_back(*right1);
            right1++;
        }
        else
        {
            tmp.push_back(*left1);
            left1++;
        }
    }
    tmp.insert(tmp.end(), left1, left.end());
    tmp.insert(tmp.end(), right1, right.end());
}
void PmergeMe::merge_sort_list(std::list<int> &tmp)
{
    if(tmp.size() <= 1)
        return;
    std::list<int> left;
    std::list<int>::iterator middle = tmp.begin();
    std::advance(middle, tmp.size() / 2);
    std::list<int> right;
    left.insert(left.begin(),tmp.begin(),middle);
    right.insert(right.begin(),middle,tmp.end());
    tmp.clear();
    merge_sort_list(left);
    merge_sort_list(right);
    std::list<int>::iterator left1 = left.begin();
    std::list<int>::iterator right1 = right.begin();
    
    while (left1 != left.end() && right1 != right.end())
    {
        if (*left1 >= *right1)
        {
            tmp.push_back(*right1);
            right1++;
        }
        else
        {
            tmp.push_back(*left1);
            left1++;
        }
    }
    tmp.insert(tmp.end(), left1, left.end());
    tmp.insert(tmp.end(), right1, right.end());
}
void PmergeMe::check_arg(const char* str1)
{
    for(int i = 0; str1[i] != '\0'; ++i) {
        if(!std::isdigit(str1[i])) {
            std::cout << "Error\n";
            exit(1);
        }
    }
    if(std::atoi(str1) <= 0) {
        std::cout << "Error\n";
        exit(1);
    }
}
/*
bool isSorted(const std::list<int>& lst) {
    std::list<int>::const_iterator it = lst.begin();
    std::list<int>::const_iterator next = it;
    ++next;

    while (next != lst.end()) {
        std::cout << *it << std::endl;
        if (*next < *it)
            return false;
        ++it;
        ++next;
    }
            std::cout << *it << std::endl;


    return true;
}*/
void PmergeMe::pars(char **argv,int argc)
{
    vec.reserve(argc - 1);
    for(int i = 1;i < argc;i++)
    {
        check_arg(argv[i]);
        vec.push_back(std::atoi(argv[i]));
    }
    struct timeval Tstart, Tend;
    gettimeofday(&Tstart, NULL);
    merge_sort_vec(vec);
    gettimeofday(&Tend, NULL);
    std::cout << "After: ";
    if(argc <= 6)
    {
        for(int i = 0;i < argc - 1;i++)
            std::cout << vec[i]<<" ";
    }
    else
    {
        for(int i = 0;i < 5;i++)
            std::cout << vec[i]<<" ";
        std::cout <<"[...]";
    }
    std::cout <<std::endl;
    double _vecTime = ((Tend.tv_sec * 10000000  + Tend.tv_usec) - (Tstart.tv_sec * 10000000 + Tstart.tv_usec));
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << std::fixed << _vecTime << " us." << std::endl;
    for(int i = 1;i < argc;i++)
    {
        lis.push_back(std::atoi(argv[i]));
    }
    gettimeofday(&Tstart, NULL);
    merge_sort_list(lis);
    gettimeofday(&Tend, NULL);
    // if(isSorted(lis) == false)
    //     exit(1);
    double _listTime = ((Tend.tv_sec * 10000000  + Tend.tv_usec) - (Tstart.tv_sec * 10000000 + Tstart.tv_usec));
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << std::fixed << _listTime << " us." << std::endl;
    
}