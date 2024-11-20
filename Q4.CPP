#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
private:
    string color;

public:
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    virtual void calculateArea() = 0;

    virtual void display() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
    double area;

public:
    Circle(double r, const string& c) : radius(r) {
        setColor(c);
        calculateArea();
    }

    void setRadius(double r) {
        radius = r;
        calculateArea();
    }

    double getRadius() const {
        return radius;
    }

    void calculateArea() override {
        area = M_PI * radius * radius;
    }

    void display() const override {
        cout << "Circle:\n"
             << "Color: " << getColor() << "\n"
             << "Radius: " << radius << "\n"
             << "Area: " << area << "\n\n";
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
    double area;

public:
    Rectangle(double l, double w, const string& c) : length(l), width(w) {
        setColor(c);
        calculateArea();
    }

    void setLength(double l) {
        length = l;
        calculateArea();
    }

    void setWidth(double w) {
        width = w;
        calculateArea();
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void calculateArea() override {
        area = length * width;
    }

    void display() const override {
        cout << "Rectangle:\n"
             << "Color: " << getColor() << "\n"
             << "Length: " << length << "\n"
             << "Width: " << width << "\n"
             << "Area: " << area << "\n\n";
    }
};

int main() {
    Shape* shapes[2];

    shapes[0] = new Circle(5.0, "Red");
    shapes[1] = new Rectangle(10.0, 4.0, "Blue");

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
    }

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}
