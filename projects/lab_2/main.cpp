#include <clocale>
#include <cmath>
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

    if (a == 0) {
        std::cout << "Równanie prostej: y = " << b << "\n";
    } else {
        if (b < 0) {
            std::cout << "Równanie prostej: y = " << a << "x - " << std::abs(b)
                      << "\n";
        } else if (b == 0) {
            std::cout << "Równanie prostej: y = " << a << "x" << "\n";
        } else {
            std::cout << "Równanie prostej: y = " << a << "x + " << b << "\n";
        }
    }
}

void ex_4() {
    double a {}, b {}, c {}, x {};

    std::cout << std::setw(20) << std::setfill('*') << "";
    std::cout << "\nPodaj a: ";
    std::cin >> a;
    std::cout << "\nPodaj b: ";
    std::cin >> b;
    std::cout << "\nPodaj c: ";
    std::cin >> c;
    std::cout << std::setw(20) << std::setfill('*') << "";
    std::cout << "\nPodaj x: ";
    std::cin >> x;
    std::cout << std::setw(20) << std::setfill('*') << "\n";
    std::cout << "f(x) = " << a << "x^2 + " << b << "x" << " + " << c << "\n";
    std::cout << std::setw(20) << std::setfill('*') << "\n";
    std::cout << "f(x) = " << a * (x * x) + b * x + c << "\n";
}

int main() {
    ex_4();
    return 0;
}
