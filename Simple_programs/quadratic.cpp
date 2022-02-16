#include <iostream>
#include <cmath>
int Discriminant(int a, int b, int c) {
    int d = (b * b) - (4 * a * c);
    return d;
}
double x1(int d, int b, int a) {
    return (-b + sqrt(d)) / (2 * a);
}

double x2(int d, int b, int a) {
    return (-b - std::sqrt(d)) / (2 * a);
}
int main() {
    int a, b, c;
    std::cout << "A: ";
    std::cin >> a;
    std::cout << "B: ";
    std::cin >> b;
    std::cout << "C: ";
    std::cin >> c;
    if(Discriminant(a, b, c) < 0) {
        std::cout << "No roots." << std::endl;
        return 0;
    }
    std::cout << x1(Discriminant(a, b, c), b, a) << std::endl;
    std::cout << x2(Discriminant(a, b, c), b, a) << std::endl;
    return 0;

}
