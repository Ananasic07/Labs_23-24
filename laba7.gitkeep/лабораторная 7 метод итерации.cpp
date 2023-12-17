// лабораторная 7 метод итерации.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

const double epsilon = pow(10,-6); 

// Метод итерации
double f(double x) {
    return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
    }

int main() {
    setlocale(LC_ALL, "Rus");
    double a,b,x;
    a = 0;
    b = 1;

    while (abs(b - a) > epsilon) {
        x = (a + b) / 2;
        if (f(a) * f(x) < 0) {
            b = x;
        }
        else {
            a = x;
        }
    }
    cout << (a + b) / 2 << endl;
    return 0;
}

