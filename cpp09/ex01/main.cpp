#include"RPN.hpp"
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
