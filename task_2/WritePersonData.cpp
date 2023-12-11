#include "Header.h"

extern double salary;

void WritePersonData(const std::string& name, const unsigned short* age, const std::string& height, const std::string& weight)
{
    std::cout << "Age: " << *age << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Salary: " << salary << " rub" << std::endl;
}
