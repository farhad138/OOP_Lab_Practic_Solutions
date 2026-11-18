/*Employee Department system*/
#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId) {
        this->employeeId = employeeId;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    int getEmployeeId() {
        return employeeId;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    emp.setName("Rahim Ahmed");
    emp.setAge(28);
    emp.setEmployeeId(5001);
    emp.setSalary(45000.50);

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Employee ID: " << emp.getEmployeeId() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}
