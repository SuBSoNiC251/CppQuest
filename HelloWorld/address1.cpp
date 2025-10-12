#include <iostream>
int g = 10;
int main() {
    /*int x = 42;
    int* p = &x;
    std::cout << "&g=" << &g << "\n"
        << "&x=" << &x << "\n"
        << "p=" << p << "\n"
        << "&p=" << &p << "\n";*/

    int y = 10;
    int* p = &y;
    int** pp = &p;
    std::cout << "&y=" << &y << "\n"
        << "&p=" << &p << "\n"
        << "&pp=" << &pp << "\n\n"
        << "*p = " << *p << "\n"
        << "*pp = " << *pp << "\n"
        << "**pp = " << **pp << "\n";

    int* nptr = nullptr;
    if (nptr) std::cout << "Hi !! \n"; // not going to print if null
    else std::cout << "not going to print if null \n";

    return 0;
}
