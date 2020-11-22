// ЗАДАЧА 2
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    unsigned int a;
    std::cout << "Здравствуйте!\nВведите a=";
    std::cin>>a;
    std::cout << "a=" <<a <<std::endl;
    double Otvet2= abs(a-1) + 4*sqrt(abs(a-3));
    std::cout << "Задача 2: " << std::fixed << std::setprecision(3) << Otvet2 <<"\n";
}

    

