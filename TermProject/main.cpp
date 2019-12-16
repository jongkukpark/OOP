#include <iostream>
#include "array_2d.h"

int main() {
    array_2d* map = new array_2d();
    map->print();
    bool isNotGameEnd = true;
    while (isNotGameEnd) {
        std::cout << "커맨드 입력 (a: 왼쪽이동, d: 우측이동, s: 아래이동, x: 아래모두이동, e: 회전)" << std::endl;
        char command = 0;
        std::cin >> command;

        if (command == 'a') {
            std::cout << "왼쪽이동" << std::endl;

            map->print();
        }
        else if (command == 'd') {
            std::cout << "우측이동" << std::endl;

            map->print();
        }
        else if (command == 's') {
            std::cout << "아래이동" << std::endl;

            map->print();
        }
        else if (command == 'x') {
            std::cout << "아래모두이동" << std::endl;

            map->print();
        }
        else if (command == 'e') {
            std::cout << "회" << std::endl;

            map->print();
        }
    }
    return 0;
}