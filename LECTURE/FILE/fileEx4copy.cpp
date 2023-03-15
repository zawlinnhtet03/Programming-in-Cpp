#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rno;
    int myanmar;
    int english;
    int physics;
    int paper1;
    int paper2;
    int paper3;
};

int main() {

    // Create a Student object
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
    int total = student.myanmar + student.english + student.physics + student.paper1 + student.paper2 + student.paper3;
    int average = total / 6;
    bool pass = student.myanmar > 49 && student.english > 49 && student.physics > 49 && student.paper1 > 49 && student.paper2 > 49 && student.paper3 > 49;
    bool credit = average >= 65;
    bool distinction = average >= 80;

    // Print the student data and exam results
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
