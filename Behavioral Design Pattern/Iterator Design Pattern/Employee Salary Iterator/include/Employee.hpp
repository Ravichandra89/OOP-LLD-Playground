#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
using namespace std;

class Employee {
        string name_;
        double salary_;

    public : 
        // Default constructor
        Employee() : name_(""), salary_(0.0){};
        Employee(const string & name, double salary) : name_(name), salary_(salary){};

        // Getter Method
        string getEmployeeName() const {
            return name_;
        }

        double getEmployeeSalary() const {
            return salary_;
        }
};

#endif