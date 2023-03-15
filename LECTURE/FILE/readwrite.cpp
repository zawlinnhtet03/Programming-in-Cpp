#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    char input[75];
    ofstream os;
    os.open("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/students.txt");

    cout << "Writing to a text file" << endl;
    cout << "Please enter your name: ";
    cin.getline(input, 100);//*******  
    os << input << endl;

    cout << "Please enter your age: ";
    cin >> input;
    os << input << endl;
    os.close();

    ifstream is;
    string line;
    is.open("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/FILE/students.txt");

    cout << "Reading from a text file: " << endl;

    while(getline(is, line)) {
        cout << line << endl;
    }
    is.close();

    return 0;
}