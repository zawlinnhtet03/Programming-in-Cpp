#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int result;
    cout << "Please enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        result += pow(i, 2);
    }
    cout << "The power of " << num << " is " << result << "." << endl;
    return 0;
}
