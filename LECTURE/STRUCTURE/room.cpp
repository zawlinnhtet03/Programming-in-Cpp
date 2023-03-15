#include <iostream>

using namespace std;

// Define a struct to represent English distance
struct Distance {
    int feet;
    float inches;
};

// Define a struct to represent a rectangular room
struct Room {
    Distance length; // Length of the room
    Distance width; // Width of the room
};

int main() {
    // Define a Room variable named dining
    Room dining;

    // Assign values to the length and width of the dining room
    dining.length.feet = 13;
    dining.length.inches = 0;
    dining.width.feet = 10;
    dining.width.inches = 6;

    // Calculate the area of the dining room in square feet
    float lengthInFeet = dining.length.feet + dining.length.inches / 12.0;
    float widthInFeet = dining.width.feet + dining.width.inches / 12.0;
    float areaInSquareFeet = lengthInFeet * widthInFeet;

    // Display the area of the dining room
    cout << "The area of the dining room is " << areaInSquareFeet << " square feet." << endl;

    return 0;
}
