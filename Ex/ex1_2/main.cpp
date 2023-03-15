#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    for (int i = 100; i >= 1; i--)
    {
        num = num + i;
    }
    cout << num << endl;
    return 0;
}
