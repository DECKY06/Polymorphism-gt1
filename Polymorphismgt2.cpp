#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual void showDetails() {
        cout << "Generic Employee: No specific role." << endl;
    }
};

// Derived class - Manager
class Manager : public Employee {
public:
    void showDetails() override {
        cout << "Manager: Oversees the team and manages projects." << endl;
    }
};

// Derived class - Developer
class Developer : public Employee {
public:
    void showDetails() override {
        cout << "Developer: Writes and maintains code for applications." << endl;
    }
};

int main() {
    int choice;

    cout << "=== Employee Information System ===" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "Enter your choice (1-2): ";
    
    if (!(cin >> choice)) {
        cout << "Invalid input!" << endl;
        return 0;
    }
    
    Employee* emp = nullptr;

    if (choice == 1) {
        emp = new Manager();
    } else if (choice == 2) {
        emp = new Developer();
    } else {
        emp = new Employee();
    }
    
    if (emp) {
        cout << "\nDetails: ";
        emp->showDetails();
        delete emp;
    }

    return 0;
}
