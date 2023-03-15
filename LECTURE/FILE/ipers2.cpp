#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        short age;
    
    public:
        void showData() {
            cout << "Name: " << name << endl;
            
            cout << "Age: " << age;
        }

        void setName(string n) {
            name = n;
        }

        void setAge(short a) {
            age = a;
        }
};

int main() {
    Person person;
    string n;
    short a;

    ifstream inFile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/Person2.txt");

    getline(inFile, n);
    inFile >> a;

    person.setName(n);
    person.setAge(a);
    person.showData();

    return 0;
}