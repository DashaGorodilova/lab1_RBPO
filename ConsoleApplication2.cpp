#include <iostream>
#include <string>


// через возвращаемое значение
unsigned short ReadPersonAge() 
{
    unsigned short age;
    std::cout << "Please, input you age: ";
    std::cin >> age;
    return age;
}

// через возвращаемое значение
std::string ReadPersonName() 
{
    std::string name;
    std::cout << "Please, input your name: ";
    std::cin.ignore(); // Очищаем буфер ввода перед считыванием строки
    std::getline(std::cin, name);
    return name;
}

unsigned short height;
// c глобальной переменной height
void ReadPersonHeight() 
{
    std::cout << "Please, input your height: ";
    std::cin >> height;
}

// через параметры по ссылке
void ReadPersonWeight(unsigned short& weight) 
{
    std::cout << "Please, input your weight: ";
    std::cin >> weight;
}

double salary;
// через параметры по указателю
void ReadPersonSalary(double* salary) 
{
    std::cout << "Please, input your salary: ";
    std::cin >> *salary;
}

// Перегруженная функция для ввода имени, возраста и заработной платы человека
void ReadPersonData(unsigned short& age, std::string& name, double& salary) 
{
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonSalary(&salary);
}

void ReadPersonData(unsigned short& age, std::string& name, unsigned short& weight)
{
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonHeight();
    ReadPersonWeight(weight);
}

// Функция для вывода данных о человеке на экран
void WritePersonData(
    const std::string& name,
    const unsigned short* age,
    const std::string& height = "",
    const std::string& weight = "")
{
        std::cout << "Age: " << *age << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Weight: " << weight << std::endl;
        std::cout << "Salary: " << salary << " rub" << std::endl;
}

int main() {
    unsigned short age;
    unsigned short weight;
    std::string name;

    ReadPersonData(age, name, salary); //1
    ReadPersonData(age, name, weight); //2
    WritePersonData(name, &age, std::to_string(height), std::to_string(weight));

    return 0;
}