#include "Header.h"
extern unsigned short height;
extern double salary;

int main() {
    unsigned short age;
    unsigned short weight;
    std::string name;

    ReadPersonData(age, name, salary); //1
    ReadPersonData(age, name, weight); //2
    WritePersonData(name, &age, std::to_string(height), std::to_string(weight));

    return 0;
}
