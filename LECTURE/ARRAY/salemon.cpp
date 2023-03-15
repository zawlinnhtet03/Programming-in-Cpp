#include <iostream>
#include <iomanip> //for setprecision, etc.

using namespace std;

const int DISTRICTS = 4; //array dimensions
const int MONTHS = 3;

int main()
{
    double sales[DISTRICTS][MONTHS]; //two-dimensional array definition
    
    cout << endl;
    
    //get array values
    for (int d = 0; d < DISTRICTS; d++) {
        for (int m = 0; m < MONTHS; m++) {
            cout << "Enter sales for district " << d+1;
            cout << ", month " << m+1 << ": ";
            cin >> sales[d][m]; //put number in array
        }
    }
    
    cout << "\n\n";
    cout << " Month\n";
    cout << " 1 2 3";
    
    //display array values
    for (int d = 0; d < DISTRICTS; d++) {
        cout << "\nDistrict" << d+1;
        for (int m = 0; m < MONTHS; m++) {
            cout << setiosflags(ios::fixed) //not exponential
                 << setiosflags(ios::showpoint) //always use point
                 << setprecision(2) //digits to right
                 << setw(10) //field width
                 << sales[d][m]; //get number from array
        }
    }
    
    cout << endl;

    return 0;
}
