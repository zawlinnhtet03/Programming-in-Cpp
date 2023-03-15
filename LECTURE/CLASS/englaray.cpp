#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        float inches;

    public:
        Distance(int ft = 0, float in = 0) {
            feet = ft;
            inches = in;
        }

        void getDist() {
            cout << "\nEnter feet: ";
            cin >> feet;

            while (feet < 0) {
                cout << "Feet cannot be negative. Please enter a non-negative value: ";
                cin >> feet;
            }

            cout << "\nEnter inches: ";
            cin >> inches;

            while (inches < 0 || inches >= 12) {
                cout << "Inches must be between 0 and 11. Please enter a valid value: ";
                cin >> inches;
            }
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