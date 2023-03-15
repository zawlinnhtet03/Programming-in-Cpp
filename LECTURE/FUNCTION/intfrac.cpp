#include <iostream>
using namespace std;

void intfrac(float n, float& intp, float& fracp);

int main() {
    float number, intpart, fracpart;
    do {
        cout << "Enter a real number: ";
        cin >> number;
        intfrac(number, intpart, fracpart);
        cout << "Integer part: " << intpart << ", Fraction part: " << fracpart << endl;
    } while (number != 0.0);
    
    return 0;
}

void intfrac(float n, float& intp, float& fracp) {
    // Get the integer part of n by casting it to int
    intp = static_cast<int>(n);
    // Get the fractional part of n by subtracting the integer part from n
    fracp = n - intp;
}
