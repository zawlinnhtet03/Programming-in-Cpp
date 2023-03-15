#include <iostream>
#include <fstream>

using namespace std;

class Person {
    protected:
        char name[80];
        short age;

    public:
        void getData() {
            cout << "Enter name: ";
            cin.getline(name, 80);

            cout << "Enter age: ";
            cin >> age;
        }
};

int main() {
    Person person;
    person.getData();

    ofstream outFile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/Person.dat", ios::binary);

    outFile.write(reinterpret_cast<char*>(&person), sizeof(person));

    return 0;
}