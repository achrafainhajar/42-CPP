
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sys/time.h>
class Pmerge{
    std::vector<int> vec;
    public:
    void merge_sort(std::vector<int> &tmp)
    {
        if(tmp.size() <= 1)
            return;
        std::vector<int> left;
        std::vector <int>::iterator middle = tmp.begin() + (tmp.end() - tmp.begin()) / 2;
        std::vector<int> right;
        left.insert(left.begin(),tmp.begin(),middle);
        right.insert(right.begin(),middle,tmp.end());
        tmp.clear();
        merge_sort(left);
        merge_sort(right);

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
    Pmerge(){};
    void check_arg(const char* str1)
    {
        for(int i = 0; str1[i] != '\0'; ++i) {
            if(!std::isdigit(str1[i])) {
                std::cout << "Number is not digit\n";
                exit(1);
            }
        }

        if(std::atoi(str1) <= 0) {
            std::cout << "Number negative\n";
            exit(1);
        }
    }
    void pars(char **argv,int argc)
    {
        int tmp;
        for(int i = 1;i < argc;i++)
        {
            check_arg(argv[i]);
            vec.push_back(std::atoi(argv[i]));
        }
        struct timeval Tstart, Tend;
        gettimeofday(&Tstart, NULL);
        merge_sort(vec);
        gettimeofday(&Tend, NULL);
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
        std::cout << std::endl;
       double _vecTime = static_cast<double>(Tend.tv_sec - Tstart.tv_sec);
    if (Tend.tv_sec == Tstart.tv_sec + 1 && (1000000 - Tend.tv_usec) + Tstart.tv_usec >= 1000000)
        _vecTime = 0;
    if (Tend.tv_sec > Tstart.tv_sec)
    {
        tmp = ((1000000 - Tstart.tv_usec) + Tend.tv_usec );
        _vecTime += tmp / 1000000;
    }
    else
    {
        tmp = (Tend.tv_usec - Tstart.tv_usec);
        _vecTime += tmp / 1000000;
    }
        std::cout << "Time to process a range of " << argc << " elements with std::vector : " << std::fixed << _vecTime << " us." << std::endl;
    }
};
int main(int argc,char **argv)
{
    Pmerge a;
    if(argc <= 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << "Before: ";
    if(argc < 6)
    {
        for(int i = 1;i < argc ;i++)
            std::cout << argv[i]<<" ";
    }
    else
    {
        for(int i = 1;i < 6;i++)
            std::cout << argv[i]<<" ";
        std::cout <<"[...]"<< std::endl;
    }
    std::cout << "\n";
    a.pars(argv,argc);

}