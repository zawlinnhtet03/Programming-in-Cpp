#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        short age;
    
    public:
        void putData() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter age: ";
            cin >> age;
        }

        string getName() {
            return name;
        }

        short getAge() {
            return age;
        }
};

int main() {
    Person person;
    person.putData();

    ofstream outFile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/Person2.txt");

    outFile << person.getName() << "\n" << person.getAge() << "\n";

    return 0;
}