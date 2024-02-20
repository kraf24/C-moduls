#include "Iter.hpp"

void times_two(int &n) {
    std::cout << n * 2 << std::endl;
}

int print(std::string &s) {
    std::cout << s << std::endl;
    return 1;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};

    Iter(array, 5, times_two);

    std::string strings[] = {"s1", "s2", "s3"};

    Iter(strings, 3, print);
    
}