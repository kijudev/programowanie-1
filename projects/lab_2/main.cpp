#include <clocale>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <ios>
#include <iostream>

void ex_1() {
    // Init with the default constructor (0)
    float a {};
    float b {};

    std::cout << std::fixed;
    std::cout << std::setprecision(3);

    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "\nPodaj b: ";
    std::cin >> b;

    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << a / b << "\n";

    std::cout << "srednia z a i b: " << (a + b) / 2 << "\n";
}

void ex_2() {
    std::cout << "╔════╗\n";
    std::cout << "║żółw║\n";
    std::cout << "╚════╝\n";

    // Utf encoding
    std::cout << "\u0104" << std::endl;
}

void ex_3() {
    double ax {}, ay {}, bx {}, by {};

    std::cout << "\nPodaj xA: ";
    std::cin >> ax;
    std::cout << "\nPodaj yA: ";
    std::cin >> ay;
    std::cout << "\nPodaj xB: ";
    std::cin >> bx;
    std::cout << "\nPodaj yB: ";
    std::cin >> by;

    double a = (ay - by) / (ax - bx);
    double b = ay - (ax * a);

    if (b < 0) {
        std::cout << "Równanie prostej: y = " << a << "x - " << std::abs(b)
                  << "\n";
    } else {
        std::cout << "Równanie prostej: y = " << a << "x + " << b << "\n";
    }
}

int main() {
    ex_3();
    return 0;
}
