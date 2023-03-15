#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
    ofstream filestream("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/testoutput.txt");
    if (filestream.is_open()) //Check if a file is open (public member function )
    {
        filestream<< "Welcome to UIT.\n";
        filestream<< "C++ File Tutorial.\n";
        filestream.close();
    }
    else 
    {
        cout <<"File opening is fail.";
    }

    return 0;
} 