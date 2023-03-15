#include <iostream>
#include <cstring> //for strcpy()
using namespace std;

int main()
{
    char str1[10] = "C++";
    char str2[20] = "Programming"; //empty
    char str3[30] = ""; //empty string

    strcat(str1, " "); //concatenate with space
    cout << "After concatenating with space: " << str1 << endl; //display str1;

    strcat(str1, str2);
    cout << "After concatenating: " << str1 << endl; //display str1;

    strncat(str3, str2, 7);
    cout << "After concatenating: " << str3 << endl; //display str3;

    return 0;
}
