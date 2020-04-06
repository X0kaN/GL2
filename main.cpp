#include <iostream>
#include <cmath>
double a, b;
int c;
double sum(double a, double b)
{
    return(a + b);
}
int main()
{
    std::cout << "Введите первое число ";
    std::cin >> a;
    std::cout << "Введите второе число ";
    std::cin >> b;
    std::cout << "Что сделать с числами?" << std::endl;
    std::cout << "Нажмите 1, чтобы сложить" << std::endl;
    std::cout << "Нажмите 2, чтобы вычесть" << std::endl;
    std::cout << "Нажмите 3, чтобы умножить" << std::endl;
    std::cout << "Нажмите 4, чтобы разделить" << std::endl;
    std::cin >> c; std::cout << std::endl;

    switch (c) {
    case 1:
        std::cout << "В разработке";
        break;
    case 2:
        std::cout << "В разработке";
        break;
    case 3:
        std::cout << "В разработке";
        break;
    case 4:
        std::cout << "В разработке";
        break;
    }
}