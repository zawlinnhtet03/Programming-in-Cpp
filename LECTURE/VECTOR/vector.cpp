#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int>v;
    vector<int>::iterator itr;

    for(int i = 0; i < 10; i++) {
        v.push_back(i * 10);
    }

    cout << "The vector elements are: ";
    for(itr = v.begin(); itr < v.end(); itr++) {
        cout << *itr << " ";//***
    }

    cout << "\nThe size of the vector is: " << v.size();

    return 0;
}