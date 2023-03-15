#include <iostream>
#include <fstream>

using namespace std;

class Student {
    private:
        string name;
        int rno;
        int myanmar;
        int english;
        int physics;
        int paper1;
        int paper2;
        int paper3;

    public:
        void getData() {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll Number: ";
            cin >> rno;
            cout << "Enter Myanmar Mark: ";
            cin >> myanmar;
            cout << "Enter English Mark: ";
            cin >> english;
            cout << "Enter Physics Mark: ";
            cin >> physics;
            cout << "Enter Paper1 Mark: ";
            cin >> paper1;
            cout << "Enter Paper2 Mark: ";
            cin >> paper2;
            cout << "Enter Paper3 Mark: ";
            cin >> paper3;
        }

        string getName() { 
            return name; 
        }
        
        int getRno() { 
            return rno; 
        }

        int getMyanmar() { 
            return myanmar; 
        }

        int getEnglish() {
            return english; 
        }
        int getPhysics() {
            return physics; 
        }

        int getPaper1() { 
            return paper1; 
        }

        int getPaper2() {
            return paper2;
        }

        int getPaper3() {
            return paper3; 
        }

        int calculateAverage() {
            int total = myanmar + english + physics + paper1 + paper2 + paper3;
            return total / 6;
        }

        bool isPass() {
            return myanmar > 49 && english > 49 && physics > 49 && paper1 > 49 && paper2 > 49 && paper3 > 49;
        }

        bool isCredit() {
            return calculateAverage() >= 65;
        }

        bool isDistinction() {
            return calculateAverage() >= 80;
        }
};

int main() {
    Student student;

    // Open the file for writing in binary mode
    ofstream outFile("student.txt", ios::out | ios::binary);
    if (!outFile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    // Get student data from user input
    student.getData();

    // Write the student data to the file
    outFile.write((char*)&student, sizeof(student));

    // Close the file
    outFile.close();



    // Open the file for reading in binary mode
    ifstream inFile("student.txt", ios::in | ios::binary);
    if (!inFile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    // Read the student data from the file
    inFile.read((char*)&student, sizeof(student));

    // Close the file
    inFile.close();
    

    // Calculate the average and check pass/fail status
    bool pass = student.isPass();
    bool credit = student.isCredit();
    bool distinction = student.isDistinction();

    cout << endl << "Showing Data" << endl << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Roll No: " << student.getRno() << endl;
    cout << "Myanmar: " << student.getMyanmar() << endl;
    cout << "English: " << student.getEnglish() << endl;
    cout << "Physics: " << student.getPhysics() << endl;
    cout << "Paper 1: " << student.getPaper1() << endl;
    cout << "Paper 2: " << student.getPaper2() << endl;
    cout << "Paper 3: " << student.getPaper3() << endl;

    if (pass) {
        cout << "Result: Pass" << endl;
        if (distinction) {
            cout << "Distinction" << endl;
        } else if (credit) {
            cout << "Credit" << endl;
        }
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}