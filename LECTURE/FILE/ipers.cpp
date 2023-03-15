#include <iostream>
#include <fstream>

using namespace std;

class Person {
    protected:
        char name[80];
        short age;

    public:
        void showData() {
            cout << "Enter name: " << name << endl;

            cout << "Enter age: " << age << endl;
        }
};

int main() {
    Person person;
    // person.getData();

    ifstream inFile("C:/Users/Zaw Linn Htet/Desktop/ME/CPP/file/Person.dat", ios::binary);

    inFile.read(reinterpret_cast<char*>(&person), sizeof(person));

    person.showData();

    return 0;
}