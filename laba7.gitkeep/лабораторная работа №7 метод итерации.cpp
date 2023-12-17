// лабораторная работа №7 метод итерации.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
const double epsilon = pow(10,-6);

double f(double x)
{
    // return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
    return cos(sqrt(1 - (0.3 * pow(x, 3))));
}

int main()
{
    double x_0, x_1;

    x_0 = 0.5;
    x_1 = f(x_0);

    while (abs(x_1 - x_0) > epsilon)
    {
        x_0 = x_1;
        x_1 = f(x_0);
    }
    cout << x_1;
    return 0;
}
