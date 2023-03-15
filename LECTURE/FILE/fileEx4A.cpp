#include <iostream>
#include <fstream>

using namespace std;

class Student {
    public:
        string name;
        int rno;
        int myanmar;
        int english;
        int physics;
        int paper1;
        int paper2;
        int paper3;

    // Student() {
    //     // Default constructor
    // }

    // Student(string name, int rno, int myanmar, int english, int physics, int paper1, int paper2, int paper3) {
    //     this->name = name;
    //     this->rno = rno;
    //     this->myanmar = myanmar;
    //     this->english = english;
    //     this->physics = physics;
    //     this->paper1 = paper1;
    //     this->paper2 = paper2;
    //     this->paper3 = paper3;
    // }

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
    cout << "Enter Name : ";
    cin >> student.name;
    cout << "Enter Roll Number : ";
    cin >> student.rno;
    cout << "Enter Myanmar Mark : ";
    cin >> student.myanmar;
    cout << "Enter English Mark : ";
    cin >> student.english;
    cout << "Enter Physics Mark : ";
    cin >> student.physics;
    cout << "Enter Paper1 Mark : ";
    cin >> student.paper1;
    cout << "Enter Paper2 Mark : ";
    cin >> student.paper2;
    cout << "Enter Paper3 Mark : ";
    cin >> student.paper3;

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
    cout << "Name: " << student.name << endl;
    cout << "Roll No: " << student.rno << endl;
    cout << "Myanmar: " << student.myanmar << endl;
    cout << "English: " << student.english << endl;
    cout << "Physics: " << student.physics << endl;
    cout << "Paper 1: " << student.paper1 << endl;
    cout << "Paper 2: " << student.paper2 << endl;
    cout << "Paper 3: " << student.paper3 << endl;

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