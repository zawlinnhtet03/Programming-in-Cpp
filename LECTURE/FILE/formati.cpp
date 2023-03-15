#include <fstream> //for file I/O
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;
    int j;
    double d;
    string str1;
    string str2;

    ifstream infile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/fdata.txt");
    if (!infile.is_open()) {
        cout << "Error opening";
        return 1;
    } //create ifstream object

    infile >> ch >> j >> d >> str1 >> str2; //extract (read) data from it
    
    cout << ch << endl //display the data
    << j << endl
    << d << endl
    << str1 << endl
    << str2 << endl;
    
    return 0;
}