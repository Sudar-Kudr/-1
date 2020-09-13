//
//  main.cpp
//  ЛР1 зад3
//
//  Created by User on 09.09.2020.
//  Copyright © 2020 User. All rights reserved.
//
/*
     33333
    33   33
        33
      333
        33
         33
    333333
*/
// ЗАДАЧА 3 /////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <ios>

int main()
{
    bool m, n, k, l;
    std::cout << "Здравствуйте!\nВведите m=";
    std::cin>>m;
    std::cout << "Введите n=";
    std::cin>>n;
    std::cout << "Введите k=";
    std::cin>>k;
    std::cout << "Введите l=";
    std::cin>>l;
    std::cout << std::boolalpha << (m||n)&&((!k&&!l)||(k&&l)) ;
    /*
    int Otv=(m||n)&&((!k&&!l)||(k&&l));
    std::cout << "Ответ: ";
    if (Otv == 1)
    {
        std::cout << "Истина\n";
    }
    else
    {
        std::cout << "Ложь\n";
    }
    */
    return 0;
}
