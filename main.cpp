#include <iostream>

int main() {
    std::system("chcp 65001");

    int user_input;
    do {
        std::cout << "1 - Хочу учиться!" << std::endl;
        std::cout << "0 - Выйти отсюда" << std::endl;
        std::cout << "Выберите действие > ";
        std::cin >> user_input;
    } while (user_input != 0);

    return 0;
}
