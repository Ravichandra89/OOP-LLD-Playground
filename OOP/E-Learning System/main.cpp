/*
Building an E-Learning System using OOP and SOLID principles
*/

#include <iostream>
#include <vector>

using namespace std;

class User
{
private:
    string userId, name, email, password;

public:
    User(string userId, string name, string email, string password)
    {
        this->userId = userId;
        this->name = name;
        this->email = email;
        this->password = password;
    }

    // Virtual destructor
    virtua ~User(){};

    // User Methods
    string getUserId() const
    {
        return userId;
    }

    string getName() const
    {
        return name;
    }

    string getUserEmail() const
    {
        return email;
    }

    // Check if the password is correct or not
    bool checkPassword(string password) const
    {
        return this->password == password;
    }

    virtual void displayRole() = 0; // Pure virtual function
};

/*
+++++++++ STUDENT CLASS +++++++++
*/

// Course class Forward Declaration
class Course;

class Student : public User
{
private:
    vector<Course *> courses;

public:
    Student(string userId, string name, string email, string password) : User(userId, name, email, password) {};

    // Student Methods
    void addCourse(Course *it)
    {
        courses.push_back(it);
    }

    // ShowEnrolledCourses
    void showEnrolledCourses() const
    {
        cout << "Courses Enrolled: ";
        for (const auto &it : courses)
        {
            cout << " - " << it->getCourseName() << ", ";
        }
        cout << endl;
    }

    // Display Role
    void displayRole() override
    {
        cout << "I am Student " << endl;
    }

    // TODO: Implement here the CourseEnrolling function

    // Virtual Destructor
    virtual ~Student() {}
};

/*
++++++++++ TEACHER - CLASS ++++++++++
*/

class Teacher : public User
{
private:
    // Courses that the teacher is teaching/Making
    vector<Course *> courses;

public:
    Teacher (string userId, string name, string email, string password) : User(userId, name, email, password) {};

    // Teacher Methods
    
    // Create Course 
    void createCourse(Course * it) {
        courses.push_back(it);
        cout << "Course Created: " << it->getCourseName() << endl;
    }

    // Display Role
    void displayRole() override {
        cout << "I am Teacher "<< endl;
    }

    // Show all created Coursed
    void showCreatedCourses() const {
        cout << "Courses Created: ";
        for (const auto & it : courses) {
            cout << " - " << it->getCourseName() << ", ";
        }

        cout << endl;
    }

    // virtual Desctructor
    virtual ~Teacher() {}; 
};

