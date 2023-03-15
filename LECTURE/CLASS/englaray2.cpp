#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        float inches;

    public:
        void getDist() {
            cout << "\nEnter feet: ";
            cin >> feet;

            cout << "\nEnter inches: ";
            cin >> inches;
        }

        void showDist() {
            cout << feet << "\'" << inches << "\"";
        }
};

int main() {
    Distance distance[100];
    int n = 0;
    char ans;
    cout << endl;

    do {
        cout << "Distance number " << n + 1 << endl; 
        distance[n++].getDist();

        cout << "\nEnter y or n: ";
        cin >> ans;
        cout << endl;
    } while(ans != 'n');

    for (int i = 0; i < n; i++) {
        cout << "\nDistance number: " << i + 1 << " is ";
        distance[i].showDist();
    }

    cout << endl;

    return 0;
}