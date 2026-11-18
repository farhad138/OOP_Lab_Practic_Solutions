
/* University course management system */
#include <bits/stdc++.h>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;

public:
    void setCourseId(int courseId) {
        this->courseId = courseId;
    }

    void setCourseName(string courseName) {
        this->courseName = courseName;
    }

    int getCourseId() {
        return courseId;
    }

    string getCourseName() {
        return courseName;
    }

    virtual void displayCourseType() = 0; // Pure virtual function

    // Virtual destructor
    virtual ~Course() {}
};

class TheoryCourse : public Course {
public:
    void displayCourseType() override {
        cout << "This is a Theory Course" << endl;
    }
};

class LabCourse : public Course {
public:
    void displayCourseType() override {
        cout << "This is a Lab Course" << endl;
    }
};

int main() {
    Course* coursePtr;

    // 1. TheoryCourse object
    coursePtr = new TheoryCourse();
    coursePtr->setCourseId(201);
    coursePtr->setCourseName("Object Oriented Programming");

    cout << "Course ID: " << coursePtr->getCourseId() << endl;
    cout << "Course Name: " << coursePtr->getCourseName() << endl;
    coursePtr->displayCourseType();

    delete coursePtr;

    cout << endl;

    // 2. LabCourse object
    coursePtr = new LabCourse();
    coursePtr->setCourseId(202);
    coursePtr->setCourseName("Object Oriented Programming Lab");

    cout << "Course ID: " << coursePtr->getCourseId() << endl;
    cout << "Course Name: " << coursePtr->getCourseName() << endl;
    coursePtr->displayCourseType();

    delete coursePtr;

    return 0;
}
