#include <fstream> //for file I/O
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string str1 = "Kafka"; //strings without
    string str2 = "Proust"; // embedded spaces

    ofstream outfile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/fdata.txt"); //create ofstream object
    if (!outfile.is_open()) {
        cout << "Error opening";
        return 1;
    }
    
    outfile << ch << ' ' << j << ' ' << d << ' ' << str1 << ' ' << str2;

    cout << "File written\n";
    return 0;
} 
