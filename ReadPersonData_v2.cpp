#include "Header.h"

void ReadPersonData(unsigned short& age, std::string& name, unsigned short& weight)
{
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonHeight();
    ReadPersonWeight(weight);
}