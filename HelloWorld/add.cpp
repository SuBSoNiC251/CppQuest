#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }

int main() {
	int result = add(10, 20);
	cout << "Result is: " << result << endl;
	cin.get();
	return 0;
}