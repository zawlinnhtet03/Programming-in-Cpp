#include <iostream>
using namespace std;

#define SQUARE(x) x*x // Macro with argument

inline int square(int x) { return x*x; } // Inline function

int main() {
    cout << SQUARE(5) << endl; // Expand to 5*5 (25)

    int x = 2, y = 3;
    cout << SQUARE(x) << endl; // Expand to x*x (4)

    // Problem with the following macro expansions
    cout << SQUARE(5+5) << endl; // Expand to 5+5*5+5 = 35 (wrong answer)
    cout << square(5+5) << endl; // Okay square(10) = 100

    // Wrong expansion of x+y due to lack of parentheses in the macro definition
    cout << SQUARE(x+y) << endl; // Expand to x+y*x+y = 11 (wrong answer)
    cout << square(x+y) << endl; // Okay square(x+y) = 25

    // Macro expansion with side effect leads to unexpected behavior
    cout << SQUARE(++x) << endl; // Expand to ++x*++x = 16 (x incremented twice)
    cout << x << endl; // x = 4
    cout << square(++y) << endl; // Okay ++y, (y*y) = 16
    cout << y << endl; // y = 4
}
