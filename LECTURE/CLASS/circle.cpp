#include <iostream> // using IO functions
#include <string> // using string

using namespace std;

class Circle 
{
    private:
        double radius; // Data member (Variable)
        string color; // Data member (Variable)

    public:
        // Constructor with default values for data members
        Circle(double r = 1.0, string c = "red") 
        {
            radius = r;
            color = c;
        }
        
        // Member function (Getter)
        double getRadius() 
        { 
            return radius;
        }
        
        // Member function (Getter)
        string getColor() { 
            return color;
        }
        
        // Member function
        double getArea() 
        { 
            return radius * radius * 3.1416;
        }
}; 

// need to end the class declaration with a semi-colon

// Test driver function
int main() 
{
    // Construct a Circle instance
    Circle c1(1.2, "blue");
    cout << "Radius = " << c1.getRadius() << " Area = " << c1.getArea()
         << " Color = " << c1.getColor() << endl;

    // Construct another Circle instance
    Circle c2(3.4); // default color
    cout << "Radius = " << c2.getRadius() << " Area = " << c2.getArea()
         << " Color = " << c2.getColor() << endl;

    Circle c3; // default radius and color
    cout << "Radius = " << c3.getRadius() << " Area = " << c3.getArea()
         << " Color = " << c3.getColor() << endl;

    return 0;
}
