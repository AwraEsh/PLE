#include <iostream>
#include "sum.h"
#include "full.h"

int userChoose{};

int main() {

    std::cout << "###    Hello!   ###" << std::endl;
    std::cout << "## this program is for getting discriptions for any programming language you want\n\n" << std::endl;

    std::cout << "## first you shall select which lang u wanna read about. here is a list of langs iknow: \n\n";

    std::cout << "---  1  Python, "; python_sum(); std::cout << "\n";
    std::cout << "---  2  Rust, "; rust_sum(); std::cout << "\n";
    std::cout << "---  3  C++, "; cpp_sum(); std::cout << "\n\n";

    std::cout << "## now enter any number from 1 to 3 : ";
    std::cin >> userChoose; std::cout << "\n";

    while(userChoose != 1 && userChoose != 2 && userChoose != 3) {
        std::cout << "!! you enteres an invalid number! try again\n";
        std::cout << "## enter any number FROM 1 TO 3 : ";
        std::cin >> userChoose; std::cout << "\n";
    }

    if (userChoose == 1) {
        python_full();
    }

    if (userChoose == 2) {
        rust_full();
    }

    if (userChoose == 3) {
        cpp_full();
    }

    return 0;
}
