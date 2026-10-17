#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>
#include <vector>
#include "Course.H"

//defining the Student class
class Student{
private:
    string name;
    vector<Course> courses; //using a vector to store multiple courses

public:
    //using constructor to set up the student object 
    Student(std::string studentName);

    //member functions to manage courses and grades
    void addCourse(const Course& course);
    int getTotalCredits() const;
    double getTotalPoints() const;
    double getGPA() const;
    
    string getStanding() const;

    //functions for displaying the report and sorting courses
    void printReport() const;
    void sortCoursesByCreditsDesc();
    void sortCoursesByNameAsc();
};

#endif 
