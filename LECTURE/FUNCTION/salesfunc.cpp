#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

const int DISTRICTS = 4; // number of districts
const int MONTHS = 3; // number of months

// function prototype
void display(double sales[DISTRICTS][MONTHS]);

int main()
{
    // initialize two-dimensional array
    double sales[DISTRICTS][MONTHS] = {
        {1432.07, 234.50, 654.01},
        {322.00, 13838.32, 17589.88},
        {9328.34, 934.00, 4492.30},
        {12838.29, 2332.63, 32.93}
    };

    // call function with array as argument
    display(sales);

    return 0;
}

// function to display 2D array passed as argument
void display(double funsales[DISTRICTS][MONTHS])
{
    int d, m;

    // print headers
    cout << "District\tMonth 1\tMonth 2\tMonth 3\n";

    // loop through each district and month to print sales
    for (d = 0; d < DISTRICTS; d++) {
        cout << d << "\t\t";
        for (m = 0; m < MONTHS; m++) {
            cout << setiosflags(ios::fixed) << setprecision(2) << setw(8) << setiosflags(ios::showpoint) << funsales[d][m] << "\t";
        }
        cout << endl;
    }
}
