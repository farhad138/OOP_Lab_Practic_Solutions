/*Employee Management System*/
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void displayPersonInfo()
    {
        cout<<"Person Name: "<<name<<endl;
        cout <<"person Id: "<<age<<endl;
    }
};
class Employee:public Person
{
public:
    int employeeId;
    double salary;
    void displayEmployeeInfo()
    {
        cout<<"Employee ID     : "<<employeeId<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    e1.name ="Rahim";
    e1.age =21;
    e1.employeeId =3214;
    e1.salary = 25000;
    cout <<"___Employee Information___"<<endl;
    e1.displayEmployeeInfo();
    return 0;
}
