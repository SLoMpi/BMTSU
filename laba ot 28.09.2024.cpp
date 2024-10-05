#include <iostream>

int main() {
    double a,b,c;
    std::cout << "Введите сторону треугольника (a): ";
    std::cin >> a;
    std::cout << "Введите сторону треугольника (b): ";
    std::cin >> b;
    std::cout << "Введите сторону треугольника (c): ";
    std::cin >> c;
    if (a + b<=c || b+c<=a || c+a<=b) {
        std::cout << "Треугольник не существует.";
        return 1;
    }
    if (a*a>=b*b+c*c) {
        std::cout << "Треугольник не остроугольный.";
    }
    else if (b*b>=a*a+c*c) {
        std::cout <<  "Треугольник не остроугольный.";
    }
    else if (c*c>=a*a+b*b) {
        std::cout << "Треугольник не остроугольный.";
    }
    else {
        std::cout << "Треугольник остроугольный.";
    }
    return 0;
}