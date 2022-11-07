#include <iostream>
using namespace std;

void num();

int main()
{
<<<<<<< HEAD
    setlocale(LC_ALL, "rus");
    cout << "Hello World!\n";
=======
    std::cout << "Hello World!\n";

    num();

    return 0;
>>>>>>> homework
}

void num() {
    for (int i = 0; i < 5; ++i) {
	cout << i << endl;
    }
}