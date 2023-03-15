#include <iostream>
#include <cstring> // for strlen()

using namespace std;

int main()
{
    // initialize string
    char str1[] = "Oh, Captain, my Captain! "
                  "our fearful trip is done";

    const int MAX = 80; // size of str2 buffer
    char str2[MAX] = {}; // empty string

    // copy characters from str1 to str2
    for (int j = 0; j < strlen(str1); j++)
    {
        str2[j] = str1[j];
    }

    str2[strlen(str1)] = '\0'; // insert NULL at end *****

    // display str2
    cout << str2 << endl;

    return 0;
}
