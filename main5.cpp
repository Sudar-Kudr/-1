// ЗАДАЧА 5 /////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    unsigned short int e, f, d, c;
    unsigned int Otv;
    std::cout << "Здравствуйте!\nВведите e=";
    std::cin>>e;
    std::cout << "Введите f=";
    std::cin>>f;
    std::cout << "Введите d=";
    std::cin>>d;
    std::cout << "Введите c=";
    std::cin>>c;
    Otv=(e&(((~f)&d)|(f&(~d))))|(~c);
    std::cout << std::setfill('#') << std::setw(6) << std::hex << Otv << "\n";

    return 0;
}
