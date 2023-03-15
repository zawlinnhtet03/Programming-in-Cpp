#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        float inches;

    public:
        void setDist(int ft, float in) {
            feet = ft;
            inches = in;
        }

        void getDist() {
            cout << "Enter feet: ";
            cin >> feet;

            cout << "Enter inches: ";
            cin >> inches;
        }

        void showDist() {
            cout << feet << "\' " << inches << "\"";
        }
};

int main() {
    Distance d1, d2;
    d1.setDist(11, 4.55);
    d2.setDist(12, 5.56);
    // d2.getDist();

    cout << "d1 = ";
    d1.showDist();

    cout << " d2 = ";
    d2.showDist();

    cout << endl;

    return 0;
}