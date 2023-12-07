#include <iostream>

#include "menu.hpp"

int main() {
    std::system("chcp 65001");

    RBurganova::MenuItem study = {"1 - Хочу учиться!"};
    RBurganova::MenuItem exit = {"0 - Выйти отсюда"};

    int user_input;
    do {
        std::cout << study.title << std::endl;
        std::cout << exit.title << std::endl;
        std::cout << "Выберите действие > ";
        std::cin >> user_input;
    } while (user_input != 0);

    return 0;
}
