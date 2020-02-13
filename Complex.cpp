#include "Complex.h"

Complex::Complex(int a, int b) {
    this->a = a;
    this->b = b;
}

std::string to_string(const Complex cmplx) {
    return std::to_string(cmplx.a) + " + " + std::to_string(cmplx.b) + "j";
}

bool operator < (const Complex a, const Complex b) {
    return sqrt(a.a * a.a + a.b * a.b) < sqrt(b.a * b.a + b.b * b.b);
}

bool operator > (const Complex a, const Complex b) {
    return !(a < b);
}