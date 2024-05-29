//  WAP to find area, perimeter and volume of a Rectangular, square and Circular Box using multilevel
// inheritance and function overriding?
    #include <iostream>
#include <cmath>

using namespace std;

// Base class for geometric shapes
class Shape {
	public:
	    virtual int calculateArea() = 0;
	    virtual int calculatePerimeter() = 0;
	    virtual int calculateVolume() = 0;
};

// Base class for rectangular and square shapes
class RectangularShape : public Shape {
	protected:
	    int length;
	    int width;
	
	public:
	    RectangularShape(int l, int w) : length(l), width(w) {}
	
	    int calculateArea() override {
	        return length * width;
	    }
	
	    int calculatePerimeter() override {
	        return 2 * (length + width);
	    }
	
	    int calculateVolume() override {
	        return length * width;
	    }
};

// Base class for circular shapes
class CircularShape : public Shape {
	protected:
	    int radius;
	
	public:
	    CircularShape(int r) : radius(r) {}
	
	    int calculateArea() override {
	        return static_cast<int>(M_PI * radius * radius);
	    }
	
	    int calculatePerimeter() override {
	        return static_cast<int>(2 * M_PI * radius);
	    }
	
	    int calculateVolume() override {
	        return static_cast<int>(M_PI * radius * radius * radius);
	    }
};

// Derived class for square
class Square : public RectangularShape {
	public:
	    Square(int s) : RectangularShape(s, s) {}
};

// Derived class for rectangle
class Rectangle : public RectangularShape {
	public:
	    Rectangle(int l, int w) : RectangularShape(l, w) {}
};

// Derived class for circle
class Circle : public CircularShape {
	public:
	    Circle(int r) : CircularShape(r) {}
};

int main() {
    // Create instances of shapes
    Square square(5);
    Rectangle rectangle(4, 6);
    Circle circle(3);

    // Calculate and print properties
    cout << "Square Area: " << square.calculateArea() << endl;
    cout << "Square Perimeter: " << square.calculatePerimeter() << endl;
    cout << "Square Volume: " << square.calculateVolume() << endl;

    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "Rectangle Volume: " << rectangle.calculateVolume() << endl;

    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Perimeter: " << circle.calculatePerimeter() << endl;
    cout << "Circle Volume: " << circle.calculateVolume() << endl;

    return 0;
}
