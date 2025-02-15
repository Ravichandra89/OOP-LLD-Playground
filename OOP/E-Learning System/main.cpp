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
    Teacher(string userId, string name, string email, string password) : User(userId, name, email, password) {};

    // Teacher Methods

    // Create Course
    void createCourse(Course *it)
    {
        courses.push_back(it);
        cout << "Course Created: " << it->getCourseName() << endl;
    }

    // Display Role
    void displayRole() override
    {
        cout << "I am Teacher " << endl;
    }

    // Show all created Coursed
    void showCreatedCourses() const
    {
        cout << "Courses Created: ";
        for (const auto &it : courses)
        {
            cout << " - " << it->getCourseName() << ", ";
        }

        cout << endl;
    }

    // virtual Desctructor
    virtual ~Teacher() {};
};

/*
+++++++++ COURSES CLASS +++++++++
*/

class Course
{
private:
    string courseId, courseName, description;
    double price;
    Teacher *teacher;           // Teacher who is teaching the course
    vector<Student *> students; // Students Enrolled in the course

public:
    Course(string courseId, string courseName, string description, double price, Teacher *teacher)
    {
        this->courseId = courseId;
        this->courseName = courseName;
        this->description = description;
        this->price = price;
        this->teacher = teacher;
    }

    // Course Methods
    string getCourseName() const
    {
        return courseName;
    }

    double getCoursePrice() const
    {
        return price;
    }

    // Enroll Students
    void addStudent(Student *it)
    {
        students.push_back(it);
        cout << "Student Enrolled: " << it->getName() << " in " << courseName << endl;
    }

    // Show all Enrolled students
    void showEnrolledStudents() const
    {
        cout << "Students Enrolled: ";
        for (const auto &it : students)
        {
            cout << " - " << it->getName() << ", ";
        }
        cout << endl;
    }

    void showCourseDetails() const
    {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Description: " << description << endl;
        cout << "Course Price: " << price << endl;

        cout << "Teacher: " << teacher->getName() << endl;
        showEnrolledStudents(); // Show all Enrolled Students
    };
};

/*
+++++++++ Payment Processor +++++++++
*/

// PaymentMethod Interface
class IPaymentMethod
{
public:
    virtual bool processPayment(double amount) = 0; // Pure Virtual Function
    virtual ~IPaymentMethod() {};
};

/*
=========== CreditCard Payment Method ===========
Concrete Implementation of IPaymentMethod Interface
*/

class CreditCardPayment : public IPaymentMethod
{
private:
    string cardNumber, expiryDate, cvv;

public:
    CreditCardPayment(string cardNumber, string expiryDate, string cvv)
    {
        this->cardNumber = cardNumber;
        this->expiryDate = expiryDate;
        this->cvv = cvv;
    }

    // Process Payment
    bool processPayment(double amount) override
    {
        cout << "Processing Credit Card Payment of " << amount << endl;
        return true;
    }

    // virtual destructor
    virtual ~CreditCardPayment() {};
};

/*
============ PayPal Payment ============
Concrete Implementation of IPaymentMethod Interface
*/

class PayPalPayment : public IPaymentMethod
{
private:
    string email, password;

public:
    PayPal(string email, string password)
    {
        this->email = email;
        this->password = password;
    }

    // Process PayPal payment
    bool processPayment(double amount) override
    {
        cout << "Processing PayPal Payment of " << amount << endl;
        return true;
    }

    // Virtual Destructor
    virtual ~PayPal() {};
};

/*
============ Stripe Payment Method ===============
Concrete Implementation of IPaymentMethod Interface
*/

class StripePayment : public IPaymentMethod
{
private:
    string apiKey;

public:
    Stripe(string apiKey)
    {
        this->apiKey = apiKey;
    }

    // Process Stripe Payment
    bool processPayment(double amount) override
    {
        cout << "Processing Stripe Payment of " << amount << endl;
        return true;
    }

    // virtual Destructor
    virtual ~Stripe() {};
};

// PaymentProcessor
class PaymentService
{
private:
    IPaymentMethod *paymentMethod;

public:
    PaymentService(IPaymentMethod *it)
    {
        paymentMethod = it;
    }

    void process(double amount)
    {
        paymentMethod->processPayment(amount);
    }

    virtual ~PaymentService() {};
};

/*
=============================================
        Building Notification System
=============================================
*/

class INotification
{
public:
    virtual bool sendNotification(string message) = 0; // Pure virtual function
    virtual ~INotification() {};
};

/*
================= Email Notification =================
*/

class EmailNotification : public INotification
{
public:
    bool sendNotification(const string &message, const User *it) override
    {
        cout << "Sending Email Notification to " << it->getUserEmail() << " : " << message << endl;
        return true;
    }
};

/*
=============== SMS Notification ==================
*/
class SMSNotification : public INotification
{
public:
    bool sendNotification(const string &message, const User *it) override
    {
        cout << "Sending SMS Notification to " << it->getUserName() << " : " << message << endl;
        return true;
    }
};

/*
================= Notification Manager =================
*/

class NotificationManager
{
private:
    INotification *notifier;

public:
    NotificationManager(INotification &it)
    {
        notifier = &it;
    }

    void notify(string message, const User *it)
    {
        notifier->sendNotification(message, it);
    }
};

int main()
{
    Teacher *teacher1 = new Teacher("T001", "Dr. John Doe", "johndoe@email.com", "securepass");

    
    Course *course1 = new Course("C101", "Introduction to C++", "Learn the basics of C++", 49.99, teacher1);
    Course *course2 = new Course("C102", "Advanced C++", "Master C++ programming", 79.99, teacher1);

    // Assign courses to the teacher
    teacher1->createCourse(course1);
    teacher1->createCourse(course2);
    teacher1->showCreatedCourses();

    // Creating a student
    Student *student1 = new Student("S001", "Alice Johnson", "alice@email.com", "alicepass");

    // Enrolling student in courses
    student1->addCourse(course1);
    student1->addCourse(course2);
    course1->addStudent(student1);
    course2->addStudent(student1);

    // Display enrolled courses for the student
    student1->showEnrolledCourses();
    course1->showCourseDetails();
    course2->showCourseDetails();

    // Payment processing using different methods
    IPaymentMethod *creditCard = new CreditCardPayment("1234-5678-9876-5432", "12/25", "123");
    PaymentService *paymentService1 = new PaymentService(creditCard);
    paymentService1->process(course1->getCoursePrice());

    IPaymentMethod *paypal = new PayPalPayment("alice@email.com", "alicepass");
    PaymentService *paymentService2 = new PaymentService(paypal);
    paymentService2->process(course2->getCoursePrice());

    // Notification system
    INotification *emailNotifier = new EmailNotification();
    NotificationManager *notificationManager = new NotificationManager(*emailNotifier);
    notificationManager->notify("Welcome to the course!", student1);

    delete teacher1;
    delete course1;
    delete course2;
    delete student1;
    delete creditCard;
    delete paypal;
    delete paymentService1;
    delete paymentService2;
    delete emailNotifier;
    delete notificationManager;

    return 0;
}
