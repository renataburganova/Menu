#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    std::system("chcp 65001");

    RBurganova::MenuItem study = {"1 - Хочу учиться!", RBurganova::study};
    RBurganova::MenuItem exit = {"0 - Выйти отсюда", RBurganova::exit};

    RBurganova::MenuItem* main_children[] = {&exit, &study};
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    int user_input;
    do {
        for (int i = 1; i < main_size; ++i) {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "Выберите действие > ";

        std::cin >> user_input;
        main_children[user_input]->func();

    } while (true);

    return 0;
}
