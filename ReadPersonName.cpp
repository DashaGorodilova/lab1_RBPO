#include "Header.h"

// ����� ������������ ��������
std::string ReadPersonName()
{
    std::string name;
    std::cout << "Please, input your name: ";
    std::cin.ignore(); // ������� ����� ����� ����� ����������� ������
    std::getline(std::cin, name);
    return name;
}