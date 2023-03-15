#include <iostream>
#include <cstdlib> // for atoi and exit
using namespace std;

int main(int argc, char* argv[]) {
    // Check if there are enough arguments
    if (argc != 4) {
        cout << "Usage: Arithmetic num1 num2 operator" << endl;
        exit(1);
    }
    
    // Parse the input arguments as integers and operator
    int operand1 = atoi(argv[1]);
    int operand2 = atoi(argv[2]);
    char op = argv[3][0];
    
    // Perform the requested arithmetic operation
    switch (op) {
        case '+':
            cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << endl;
            break;
        case '-':
            cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << endl;
            break;
        case '*':
            cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << endl;
            break;
        case '/':
            // Check for divide by zero
            if (operand2 == 0) {
                cout << "Cannot divide by zero" << endl;
                exit(1);
            }
            cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << endl;
            break;
        default:
            cout << "Unknown operator" << endl;
            exit(1);
    }
    
    return 0;
}
