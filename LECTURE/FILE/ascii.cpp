#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open file for writing
    ofstream outfile("ASCIITable.txt");
    if (!outfile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Write all ASCII characters to file
    for (int i = 0; i < 128; i++) {
        outfile << char(i);
    }

    // Close file
    outfile.close();

    // Open file for reading
    ifstream infile("ASCIITable.txt");
    if (!infile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read file contents and display on console
    char c;
    while (infile.get(c)) {
        cout << c;
    }

    // Close file
    infile.close();

    return 0;
}
