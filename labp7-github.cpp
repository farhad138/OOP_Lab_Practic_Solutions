#include <bits/stdc++.h>
using namespace std;
class University
{
public:
    void universityInfo()
    {
        cout<<"University: BUBT "<<endl;
    }
};
class Department : public University
{
public:
    void departmentInfo()
    {
        cout<<"Department : CSE "<<endl;
    }
};
class Student : public Department
{
private:
    int studentId;
    string studentName;

public:
    void setStudent(int studentId,string studentName)
    {
        this->studentId = studentId;
        this->studentName = studentName;
    }
    void studentInfo()
    {
        cout<<"Student ID :  "<<studentId<<endl;
        cout<<"Student Name: "<<studentName<<endl;
    }
};
int main()
{
    Student s1;
    s1.setStudent( 101,"Rahim");
    s1.universityInfo();
    s1.departmentInfo();
    s1.studentInfo();
    return 0;
}
