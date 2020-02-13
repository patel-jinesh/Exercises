#include <math.h>
#include <string>

typedef struct Complex {
    int a;
    int b;

    Complex(int, int);
} Complex;

bool operator < (const Complex, const Complex); 
bool operator > (const Complex, const Complex); 

std::string to_string(const Complex);
