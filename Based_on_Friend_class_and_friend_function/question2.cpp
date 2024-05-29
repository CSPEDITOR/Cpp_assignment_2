// 2. WAP to find area and perimeter of rectangle and square using function overloading and friend class?
#include <iostream>
using namespace std;

class Shape
{
private:
    int length, width;

public:
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }

    friend int area(Shape);
    friend int perimeter(Shape);
};

int area(Shape s)
{
    return s.length * s.width;
}

int perimeter(Shape s)
{
    return 2 * (s.length + s.width);
}

int main()
{
    Shape rectangle, square;
    int choice, l, w;
    cout << "1. Rectangle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Exit" << endl;
    while (true)
    {

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter length and width of rectangle: ";
            cin >> l >> w;
            rectangle.setDimensions(l, w);
            cout << "Area of rectangle: " << area(rectangle) << endl;
            cout << "Perimeter of rectangle: " << perimeter(rectangle) << endl;
            break;
        case 2:
            cout << "Enter side of square: ";
            cin >> l;
            square.setDimensions(l, l);
            cout << "Area of square: " << area(square) << endl;
            cout << "Perimeter of square: " << perimeter(square) << endl;
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
