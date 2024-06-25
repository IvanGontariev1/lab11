#include <iostream>

int main() {
 
    bool* pBool1 = nullptr;
    bool* pBool2 = nullptr;


    pBool1 = new bool;
    pBool2 = new bool;


    *pBool1 = true;
    *pBool2 = false;


    std::cout << "Value pointed to by pBool1: " << std::boolalpha << *pBool1 << std::endl;
    std::cout << "Value pointed to by pBool2: " << std::boolalpha << *pBool2 << std::endl;


    delete pBool1;
    delete pBool2;

    return 0;
}
