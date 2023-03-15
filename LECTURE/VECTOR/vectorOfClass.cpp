#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Part {
    private:
        int modelNumber;
        int partNumber;
        float cost;

    public:
        void setter(int modelNumber, int partNumber, float cost) {
            this->modelNumber = modelNumber;
            this->partNumber = partNumber;
            this->cost = cost;
        }

        void getter() {
            cout << "Enter model no.: ";
            cin >> modelNumber;

            cout << "\nEnter part no.: ";
            cin >> partNumber;

            cout << "\nEnter cost: ";
            cin >> cost;
        }

        void display() {
            cout << "Model no.: " << modelNumber;
            cout << " Part no.: " << partNumber;
            cout << " Cost: " << cost << endl;
        }
};

int main() {
    vector<Part>v;
    Part part;

    for(int i = 0; i < 3; i++) {
        part.getter();
        v.push_back(part);
    }

    for(int i = 0; i < 3; i++) {
        v[i].display();
    }

    return 0;
}