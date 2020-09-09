//
//  main.cpp
//  ЛР 1 Вариант 27
//
//  Created by User on 09.09.2020.
//  Copyright © 2020 User. All rights reserved.
//
/*
       111          22222
     11 11         22   22
    11  11              22
        11 =======     22
        11            22
        11           22
        11          222222
*/
// ЗАДАЧА 1 и 2/////////////////////////////////////////////////
#include <iostream>
#include <cmath>

int main()
{
    int x;
    std::cout << "Здравствуйте!\nВведите x=";
    std::cin>>x;
    printf ("Задача 1: %.3f\n", 2* pow(x,4) + 3*pow(x,2) - 1);    // ЗАДАЧА 1 ////////////////////////////
    printf ("Задача 2: %.2f\n", abs(x-1) + 4*sqrt(abs(x-3)));     // ЗАДАЧА 2 ////////////////////////////
    return 0;
}


    
