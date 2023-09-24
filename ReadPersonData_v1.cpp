#include "Header.h"

void ReadPersonData(unsigned short& age, std::string& name, double& salary)
{
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonSalary(&salary);
}