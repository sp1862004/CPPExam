#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    Employee(const string& n, double s, const string& d) : name(n), salary(s), designation(d) {}

    double getSalary() const {
        return salary;
    }

    double operator+(const Employee& other) const {
        return this->salary + other.salary;
    }

    void display() const {
        cout << "Name: " << name << ", Salary: " << salary << ", Designation: " << designation << endl;
    }
};

int main() {
    Employee emp1("Jethalal", 50000, "Developer");
    Employee emp2("Shailesh", 60000, "Manager");

    cout << "Employee 1 Details: " << endl;
    emp1.display();
    cout << "\nEmployee 2 Details: " << endl;
    emp2.display();

    double totalSalary = emp1 + emp2;

    cout << "\nTotal Salary: " << totalSalary << endl;

    return 0;
}
