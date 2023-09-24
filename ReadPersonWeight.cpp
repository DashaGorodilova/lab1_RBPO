#include "Header.h"

// через параметры по ссылке
void ReadPersonWeight(unsigned short& weight)
{
    std::cout << "Please, input your weight: ";
    std::cin >> weight;
}