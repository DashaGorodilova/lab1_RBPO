#include "Header.h"

// через возвращаемое значение
std::string ReadPersonName()
{
    std::string name;
    std::cout << "Please, input your name: ";
    std::cin.ignore(); // Очищаем буфер ввода перед считыванием строки
    std::getline(std::cin, name);
    return name;
}