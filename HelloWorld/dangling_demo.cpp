#include <iostream>

using namespace std;

// dont run without understanding
int* make() {
    int x = 5;
    return &x; // ⚠️ dangling
}
