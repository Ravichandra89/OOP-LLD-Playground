#include<iostream>
using namespace std;

// Make the common salary Calculator function for all kinds of employees.
// Don't going in deep to understand the working just using this function.

class Employee {
    public: 
      virtual void calculate() = 0; 
      virtual ~Employee() {};
};

class FullTimeEmployee : public Employee {
    private: 
        double salary;
    public:
        FullTimeEmployee(double salary) {
            this->salary = salary;
        }

        void calculate() override {
            cout << "Full Time Employee Salary: " << salary << endl;
        }
};

class  partTimeEmployee : public Employee {
    private: 
        double salary;
        double hrRate;
    public:
        partTimeEmployee(double salary, double hrRate) {
            this->salary = salary;
            this->hrRate = hrRate;
        }

        void calculate() override {
            double ans = hrRate * salary;
            cout << "Part Time Employee Salary is : " << ans << endl;
        }
};

class Intern : public Employee {
    private: 
        double stipned;

    public:
      Intern(double stipned) {
        this->stipned = stipned;
      }

      void calculate() override {
        cout << "Intern Salary is : " << stipned << endl;
      }
};

int main() {
    
}