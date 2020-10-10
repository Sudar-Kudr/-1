// ЗАДАЧА 1
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double x;
    std::cout << "Здравствуйте!\nВведите x=";
    std::cin>>x;
    std::cout << "Задача 1: " << std::fixed << std::setprecision(3) << 2* pow(x,4) + 3*pow(x,2) - 1 <<"\n";
    return 0;
}

    
