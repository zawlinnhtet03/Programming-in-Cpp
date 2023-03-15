#include <fstream> //for file functions
#include <iostream>

using namespace std;

int main()
{
    char ch; //character to read
    ifstream infile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/TEST2.TXT"); //create file for input
    // while( infile ) //read until EOF or error
    while( ! infile.eof() ) //read until EOF or error
    {
        infile.get(ch); //read character
        cout << ch; //display it
    }

    cout << endl;

    return 0;
}
