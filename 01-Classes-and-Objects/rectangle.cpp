#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    void calculateArea() {
        int area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle r1;

    r1.length = 10;
    r1.breadth = 5;

    r1.calculateArea();

    return 0;
}