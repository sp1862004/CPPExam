#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0), width(0) {}

    Rectangle(double l, double w) : length(l), width(w) {}

    void setLength(double l) {
        if (l > 0)
            length = l;
        else
            cout << "Length must be positive!" << endl;
    }

    double getLength() const {
        return length;
    }

    void setWidth(double w) {
        if (w > 0)
            width = w;
        else
            cout << "Width must be positive!" << endl;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    rect.setLength(18.5);
    rect.setWidth(8.2);

    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
