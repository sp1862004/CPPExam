#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    virtual void calculateArea() = 0;

    double getArea() const {
        return area;
    }

protected:
    void setArea(double a) {
        area = a;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    void calculateArea() override {
        setArea(M_PI * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void calculateArea() override {
        setArea(length * width);
    }
};

int main() {
    Circle circle(5.0);
    circle.setColor("Red");
    circle.calculateArea();

    cout << "Circle:-" << endl;
    cout << "Color: " << circle.getColor() << endl;
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl << endl;

    Rectangle rectangle(10.0, 4.0);
    rectangle.setColor("Blue");
    rectangle.calculateArea();

    cout << "Rectangle:-" << endl;
    cout << "Color: " << rectangle.getColor() << endl;
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.getArea() << endl;

    return 0;
}
