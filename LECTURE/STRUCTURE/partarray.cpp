#include <iostream>

using namespace std;

struct Student {
    int roll;
    char name[20];
    int mark[30];
    float avg;
    int total;
};

int main() {
    Student student;
    cout << "Enter student roll number: ";
    cin >> student.roll;

    cout << "Enter student name: ";
    cin >> student.name;
    // getline(student.name, 10);

    student.total = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Enter marks: " << i + 1 << ": ";
        cin >> student.mark[i];

        student.total += student.mark[i];
    }

    student.avg = student.total / 3;
    cout << "\nRoll number: " << student.roll;
    cout << "\nName: " << student.name;
    cout << "\nTotal: " << student.total;
    cout << "\nAverage: " << student.avg;

    return 0;
}