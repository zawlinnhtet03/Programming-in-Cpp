#include <iostream>
#include <string>

using namespace std;

class Distance {
    private:
        int feet;
        float inches;

    public:
        Distance(): feet(0), inches(0.0)
        {}

        Distance(int ft, float in): feet(ft), inches(in)
        {}

        void getDist() {
            cout << "\nEnter feet: ";
            cin >> feet;

            cout << "\nEnter inches: ";
            cin >> inches;
        }

        void showDist() {
            cout << feet << "\' " << inches << "\"";
        }

        void addDist(Distance, Distance);
};

void Distance::addDist(Distance D2, Distance D3) {
    inches = D2.inches + D3.inches;
    feet = 0;
    if (inches >= 12.0) {
        inches -= 12.0;
        feet ++;
    }
    feet += D2.feet + D3.feet;
}

int main() {
    Distance d1, d3;
    Distance d2(11, 6.25);

    d1.getDist();
    d3.addDist(d1, d2);

    cout << "\nd1 = ";
    d1.showDist();
    cout << "\nd2 = ";
    d2.showDist();
    cout << "\nd3 = ";
    d3.showDist();

    return 0;
}






// #include <iostream>

// class Distance // English Distance class
// {
//     private:
//         int feet;
//         float inches;

//     public:
//         // Constructor (no arguments)
//         Distance() : feet(0), inches(0.0) {}

//         // Constructor (two arguments)
//         Distance(int ft, float in) : feet(ft), inches(in) {}

//         void getdist() // Get length from user
//         {
//             std::cout << "\nEnter feet: ";
//             std::cin >> feet;
//             std::cout << "Enter inches: ";
//             std::cin >> inches;
//         }

//         void showdist() // Display distance
//         {
//             std::cout << feet << "\'-" << inches << '\"';
//         }

//         void add_dist(Distance d2, Distance d3); // Declaration
// };

// void Distance::add_dist(Distance d2, Distance d3)
// {
//     inches = d2.inches + d3.inches; // Add the inches
//     feet = d2.feet + d3.feet; // Add the feet

//     if (inches >= 12.0) // If total exceeds 12.0
//     {
//         inches -= 12.0; // Decrease inches by 12.0
//         feet++; // Increase feet by 1
//     }
// }

// int main()
// {
//     Distance dist1, dist3; // Define two lengths
//     Distance dist2(11, 6.25); // Define and initialize dist2

//     dist1.getdist(); // Get dist1 from user
//     dist3.add_dist(dist1, dist2); // dist3 = dist1 + dist2

//     // Display all lengths
//     std::cout << "\ndist1 = ";
//     dist1.showdist();
//     std::cout << "\ndist2 = ";
//     dist2.showdist();
//     std::cout << "\ndist3 = ";
//     dist3.showdist();
//     std::cout << std::endl;

//     return 0;
// }
