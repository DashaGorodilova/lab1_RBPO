#include "Header.h"

// ÷åðåç âîçâðàùàåìîå çíà÷åíèå
std::string ReadPersonName()
{
    std::string name;
    std::cout << "Please, input your name: ";
    std::cin.ignore(); // Î÷èùàåì áóôåð ââîäà ïåðåä ñ÷èòûâàíèåì ñòðîêè
    std::getline(std::cin, name);
    return name;
}
