#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            num += i;
        }
    }
    cout << num << endl;
    return 0;
}
