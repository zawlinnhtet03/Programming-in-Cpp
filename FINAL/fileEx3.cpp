#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    //Creating Data
    string name;
    int rno, myanmar, english, physics, paper1, paper2, paper3;

    // For total
    string name1;
    int rno1, myanmar1, english1, physics1, paper11, paper21, paper31;

    //Inserting data to file
    cout << endl << "Enter Name: ";
    cin >> name;
    cout << endl << "Enter Roll Number: ";
    cin >> rno;
    cout << endl << "Enter Myanmar Mark: ";
    cin >> myanmar;
    cout << endl << "Enter English Mark: ";
    cin >> english;
    cout << endl << "Enter Physics Mark: ";
    cin >> physics;
    cout << endl << "Enter Paper1 Mark: ";
    cin >> paper1;
    cout << endl << "Enter Paper2 Mark: ";
    cin >> paper2;
    cout << endl << "Enter Paper3 Mark: ";
    cin >> paper3;

    ofstream ofile("student.txt");
    if (!ofile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }
    ofile << name << endl <<  rno << endl << myanmar << endl << english << endl << physics << endl<< paper1<< endl<< paper2 << endl << paper3 << endl;;

    ofile.close();

    // Open the file for input
    ifstream input("student.txt");
    if (!input.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

     // Read data from the file and process it
    string s;
   
    getline(input,s);
    input >> rno1 >> myanmar1 >> english1 >> physics1 >> paper11 >> paper21 >> paper31;

    input.close();

    int total = myanmar1 + english1 + physics1 + paper11 + paper21 + paper31;
    int average = total / 6;
    bool pass = myanmar1 > 49 && english1 > 49 && physics1 > 49 && paper11 > 49 && paper21 > 49 && paper31 > 49;
    bool credit = average >= 65;
    bool distinction = average >= 80;

    // Print results
    cout << endl << endl << "Showing Data ";cout << endl;
    cout << "Name: " << s << endl;
    cout << "Roll No: " << rno1 << endl;
    cout << "Myanmar: " << myanmar1 << endl;
    cout << "English: " << english1 << endl;
    cout << "Physics: " << physics1 << endl;
    cout << "Paper 1: " << paper11 << endl;
    cout << "Paper 2: " << paper21 << endl;
    cout << "Paper 3: " << paper31 << endl;

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

    cout << endl;

    // Close the file
    input.close();

    return 0;
}
