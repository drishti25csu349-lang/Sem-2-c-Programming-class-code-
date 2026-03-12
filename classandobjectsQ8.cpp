#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
  
    double volume(double side) {
        return side * side * side;
    }

    double volume(double length, double breadth, double height) {
        return length * breadth * height;
    }

    double volume(double radius, double height) {
        return 3.14159 * radius * radius * height;
    }
};

int main() {
    Shape s; 

    
    cout << "Volume of Cube: " << s.volume(3) << endl;
    cout << "Volume of Cuboid: " << s.volume(3, 5, 6) << endl;
    cout << "Volume of Cylinder: " << s.volume(2, 10) << endl;

    return 0;
}
