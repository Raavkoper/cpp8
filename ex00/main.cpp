#include "easyfind.hpp"

int main() {
    std::array<int, 8> array = {5, 2, 7, 4, 9, 6, 1, 9};
    std::vector<int> vec;
    vec.assign(5, 3);

    try {
        int i = *easyfind(array, 7);
        std::cout << i << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        int i = *easyfind(vec, 3);
        std::cout << i << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        int i = *easyfind(vec, 10);
        std::cout << i << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}