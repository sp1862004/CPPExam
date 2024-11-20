#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    Employee() : name(""), salary(0.0), designation("") {}

    
    Employee(string n, double s, string d) : name(n), salary(s), designation(d) {}

    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setSalary(double s) {
        if (s > 0)
            salary = s;
        else
            cout << "Salary must be positive!" << endl;
    }

    double getSalary() const {
        return salary;
    }

    void setDesignation(const string& d) {
        designation = d;
    }

    string getDesignation() const {
        return designation;
    }
};

int main() {
    Employee emp;

    emp.setName("Shailesh Patel");
    emp.setSalary(100000);
    emp.setDesignation("MERN Stack Devloper");

    cout << "Employee Details:-" << endl;
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: $" << emp.getSalary() << endl;
    cout << "Employee Designation: " << emp.getDesignation() << endl;

    return 0;
}
