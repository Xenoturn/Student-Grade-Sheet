#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"

using namespace std;

// defining the Student class to group student data 
class Student {
private:
    string name;
    vector<Course> courses; // using a vector to store multiple courses

public:
    // using constructor to set up the student object 
    Student(string studentName);

    // member functions to manage courses and grades
    void addCourse(const Course& course);
    int getTotalCredits() const;
    double getTotalPoints() const;
    double getGPA() const;
    string getStanding() const;

    // functions for displaying the report and sorting courses
    void printReport() const;
    void sortCoursesByCreditsDesc();
    void sortCoursesByNameAsc();
};

#endif
