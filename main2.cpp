// ЗАДАЧА 2
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    unsigned int x;
    std::cout << "Здравствуйте!\nВведите x=";
    std::cin>>x;
    std::cout << "x=" <<x <<std::endl;
    double Otvet2= abs(x-1) + 4*sqrt(abs(x-3));
    std::cout << "Задача 2: " << std::fixed << std::setprecision(3) << Otvet2 <<"\n";
}

    

