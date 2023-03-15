#include <iostream>

using namespace std;

const int MAX_DISTANCES = 100;

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

    Distance operator+(const Distance& d2) const {
        int ft = feet + d2.feet;
        float in = inches + d2.inches;

        if (in >= 12) {
            in -= 12;
            ft++;
        }

        return Distance(ft, in);
    }
};

int main() {
    Distance distance[MAX_DISTANCES];
    int n = 0;
    char ans = 'y';
    cout << endl;

    while (ans == 'y' && n < MAX_DISTANCES) {
        cout << "Enter distance number " << n + 1 << ":" << endl;
        distance[n++].getDist();

        if (n == MAX_DISTANCES) {
            cout << "Maximum number of distances reached. Cannot add more." << endl;
            break;
        }

        cout << "Add another distance? (y/n): ";
        cin >> ans;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nDistance number " << i + 1 << " is ";
        distance[i].showDist();
    }

    if (n > 1) {
        Distance total = distance[0];

        for (int i = 1; i < n; i++) {
            total = total + distance[i];
        }

        cout << "\n\nThe total distance is ";
        total.showDist();
        cout << endl;
    }

    return 0;
}
