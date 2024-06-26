#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;


    int* p = new int[n];


    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }


    for (int i = 0; i < n; ++i) {
        if (p[i] > 0) {
            p[i] = p[i] * p[i];
        }
    }


    std::cout << "Modified array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;


    delete[] p;

    return 0;
}


