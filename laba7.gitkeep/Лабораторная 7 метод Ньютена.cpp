// Лабораторная 7 метод Ньютена.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
double const epsilon = pow(10, -6);

double F(double x) {
    return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
}

double F1(double x) {
    return (9 * pow(x, 2)) / (20 * sqrt(1 - (3 * pow(x, 3)) / 10)) - (1 / (sqrt(1 - pow(x, 2))));
}

double F2(double x) {
    return (9 * (2 * x * sqrt(1 - (3 * pow(x, 3)) / 10) + (9 * pow(x, 4)) / (20 * sqrt(1 - (3 * pow(x, 3)) / 10)))) / (20 * (1 - (3 * pow(x, 3)) / 10)) - x / (pow(1 - pow(x, 2), 3 / 2));
}

int main() {
    double a, b, x_1, x_0;
    setlocale(LC_ALL, "Rus");
    a = 0;
    b = 1;
    x_1 = a;
    if (F(a) * F2(a) > 0) {
        x_0 = a;
    }
    else {
        if (F(b) * F2(b) > 0) {
            x_0 = b;
        }
    }
    while (abs(x_1 - x_0) > epsilon) {
        x_0 = x_1;
        x_1 = x_0 - F(x_0) / F1(x_0);
    }
    cout << x_1 << endl;
    return 0;
}