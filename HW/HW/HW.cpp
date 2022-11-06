#include <iostream>

void num();

int main()
{
    std::cout << "Hello World!\n";

    num();

    return 0;
}

void num() {
    for (int i = 0; i < 5; ++i) {
	cout << i << endl;
    }
}