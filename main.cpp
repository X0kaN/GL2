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
    std::cout << "������� ������ ����� ";
    std::cin >> a;
    std::cout << "������� ������ ����� ";
    std::cin >> b;
    std::cout << "��� ������� � �������?" << std::endl;
    std::cout << "������� 1, ����� �������" << std::endl;
    std::cout << "������� 2, ����� �������" << std::endl;
    std::cout << "������� 3, ����� ��������" << std::endl;
    std::cout << "������� 4, ����� ���������" << std::endl;
    std::cin >> c; std::cout << std::endl;

    switch (c) {
    case 1:
        std::cout << "� ����������";
        break;
    case 2:
        std::cout << "� ����������";
        break;
    case 3:
        std::cout << "� ����������";
        break;
    case 4:
        std::cout << "� ����������";
        break;
    }
}