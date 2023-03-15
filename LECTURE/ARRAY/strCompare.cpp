#include <iostream>
#include <cstring> //for strcmp()
using namespace std;

int main()
{
    char str1[] = "abc";
    char str2[] = "def";

    int res = strcmp(str1, str2);
    cout << "RESULT: " << res << endl;

    if (res == 0)
        cout << "Strings are equal";
    else if (res > 0)
        cout << "String 1 is greater than string 2";
    else
        cout << "String 2 is greater than string 1";

    return 0;
}
