/*
Teacher and Student Association Relation
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student; 

class Teacher {
private:
    string name;
    vector<const Student*> students; 

public:
    Teacher(const string &name) : name(name) {}

    void addStudent(const Student *st) {
        students.push_back(st);
    }

    void listAllStudents() const {
        cout << "Under Teacher " << name << ", the students are: ";
        for (const auto &it : students) {
            cout << it->getName() << " ";
        }
        cout << endl;
    }
};

class Student {
private:
    string name;

public:
    Student(const string &name) : name(name) {}


    string getName() const {
        return name;
    }
};

int main() {
    Teacher t("Ravi");
    Student st("Neha");
    Student st2("Rahul");

    t.addStudent(&st);
    t.addStudent(&st2);
    t.listAllStudents();

    return 0;
}
