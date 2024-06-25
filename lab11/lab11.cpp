#include <iostream>

int main() {

    double a, b;
    std::cout << "Enter the value for a: ";
    std::cin >> a;
    std::cout << "Enter the value for b: ";
    std::cin >> b;


    double* pA = &a;
    double* pB = &b;


    if (*pA > *pB) {
        *pA += 3;
        *pB /= 3;
    }
    else {
        *pA /= 2;
        *pB += 3;
    }


    std::cout << "Updated value of a: " << a << std::endl;
    std::cout << "Updated value of b: " << b << std::endl;

    return 0;
}
