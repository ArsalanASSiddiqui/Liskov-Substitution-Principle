// Thired Principle of SOLID
// L : Liskov Substitution  Principle
// Example of Employee Salary

#include <iostream>
using namespace std;

class Employee {
public:
    virtual int calculateSalary() const {
        int salary = 100000;
        cout << "Employee Salary: " << salary << endl;
        return salary;
    }
    
    virtual int calculateBonus() const {
        int bonus = 10000;
        cout << "Employee Bonus: " << bonus << endl;
        return bonus;
    }

    virtual ~Employee() {} // Virtual destructor for safe polymorphic use
};

class PermanentEmployee : public Employee {
public:
    int calculateSalary() const override {
        int salary = 300000;
        cout << "Permanent Employee Salary: " << salary << endl;
        return salary;
    }
    
    int calculateBonus() const override {
        int bonus = 20000;
        cout << "Permanent Employee Bonus: " << bonus << endl;
        return bonus;
    }
};

class ContractualEmployee : public Employee {
public:
    int calculateSalary() const override {
        int salary = 200000;
        cout << "Contractual Employee Salary: " << salary << endl;
        return salary;
    }
    
    int calculateBonus() const override {
        int bonus = 10000;
        cout << "Contractual Employee Bonus: " << bonus << endl;
        return bonus;
    }
};

int main() {
    Employee* employeePtr;

    // Demonstrating polymorphism
    employeePtr = new Employee();
    employeePtr->calculateSalary();
    employeePtr->calculateBonus();
    delete employeePtr;

    employeePtr = new PermanentEmployee();
    employeePtr->calculateSalary();
    employeePtr->calculateBonus();
    delete employeePtr;

    employeePtr = new ContractualEmployee();
    employeePtr->calculateSalary();
    employeePtr->calculateBonus();
    delete employeePtr;

    return 0;
}
