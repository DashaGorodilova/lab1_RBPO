#include "Header.h"

double salary;
// ����� ��������� �� ��������
void ReadPersonSalary(double* salary)
{
    std::cout << "Please, input your salary: ";
    std::cin >> *salary;
}