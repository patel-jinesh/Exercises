#include "sort.h"
#include "Complex.h"
#include <iostream>
#include <string>

template<typename T>
void printarray(T arr[], int n, std::string (*tostr)(T val)) {
    for (int i = 0; i < n; i++)
        printf("%s ", tostr(arr[i]).c_str());
    printf("\n");
}

bool greater(int a, int b) {
    return a > b;
}

bool less(int a, int b) {
    return a < b;
}

int main(int argc, const char ** argv) {
    int vals[] = {4, 3, 5, 1, 2};

    printarray<int>(vals, 5, &std::to_string);
    sort<int>(vals, 5, &greater);
    printarray<int>(vals, 5, &std::to_string);
    sort<int>(vals, 5, &less);
    printarray<int>(vals, 5, &std::to_string);

    Complex cmplx[] = {
        Complex(4, 4),
        Complex(2, 2),
        Complex(1, 1),
        Complex(3, 3),
        Complex(5, 5)
    };

    printarray<Complex>(cmplx, 5, &to_string);
    sort<Complex>(cmplx, 5, &operator<);
    printarray<Complex>(cmplx, 5, &to_string);
    sort<Complex>(cmplx, 5, &operator>);
    printarray<Complex>(cmplx, 5, &to_string);

    return 0;
}