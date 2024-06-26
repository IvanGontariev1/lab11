#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Dynamically allocate memory for the array
    int* p = new int[n];

    // Fill the array with values
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    // Process the array: square positive elements
    for (int i = 0; i < n; ++i) {
        if (p[i] > 0) {
            p[i] = p[i] * p[i];
        }
    }

    // Output the modified array
    std::cout << "Modified array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // Free the allocated memory
    delete[] p;

    return 0;
}


