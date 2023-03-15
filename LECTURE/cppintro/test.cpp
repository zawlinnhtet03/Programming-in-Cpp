#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int num;
    unsigned long fact = 1;
    cout << "Enter number: ";
    cin >> num;

    for(int i = num; i > 0; i--) {
        fact *= i;
    }

    cout << "Factorial is: " << fact << endl;

    return 0;
}