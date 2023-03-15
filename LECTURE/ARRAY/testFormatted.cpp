#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 3.14159265;
    cout << fixed << setprecision(4) << pi << endl;
    // int a = 1000;
    cout << setw(10) << pi << setw(8) << pi;
}