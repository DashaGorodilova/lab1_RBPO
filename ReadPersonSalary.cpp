#include "Header.h"

double salary;
// через параметры по значению
void ReadPersonSalary(double* salary)
{
    std::cout << "Please, input your salary: ";
    std::cin >> *salary;
}