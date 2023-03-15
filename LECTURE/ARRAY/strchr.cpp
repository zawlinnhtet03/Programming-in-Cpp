#include <iostream>
#include <cstring> //for strchr()
using namespace std;

int main()
{
    char str1[] = "Good Morning";
    char ch = 'a';

    if (strchr(str1, ch))
        cout << ch << " is found in Good Morning";
    else
        cout << ch << " is not found in Good Morning";

    return 0;
}
