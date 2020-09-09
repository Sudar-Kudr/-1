//
//  main.cpp
//  ЛР1 зад4 СистСчисл
//
//  Created by User on 09.09.2020.
//  Copyright © 2020 User. All rights reserved.
//

// ЗАДАЧА 4 /////////////////////////////////////////////////
#include <iostream>
#include <cmath>

int main()
{
    int b, x;
    std::cout << "Здравствуйте!\nВведите b=";
    std::cin>>b;
    x=pow(2,b);
    std::cout << "Число " << x << " в десятеричной СС: " << std::dec << x << "\n";
    std::cout << "Число " << x << " в восьмеричной СС: " << std::oct << x << "\n";
    return 0;
}
