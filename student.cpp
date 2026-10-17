#include "Student.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// using constructor to set up the student 
Student::Student(string studentName) {
    name = studentName;
}

// using push_back to add a new course to the vector
void Student::addCourse(const Course& course) {
    courses.push_back(course);
}

// using the loop to go though the course and to add up the credits 
int Student::getTotalCredits() const {
    int totalCreds = 0;
    for (const auto& c : courses) {
        totalCreds += c.getCredits();
    }
    return totalCreds;
}

// looping through the vector to make sure the total grade points are earned
double Student::getTotalPoints() const {
    double totalPts = 0.0;
    for (const auto& c : courses) {
        totalPts += c.gettotalPts();
    }
    return totalPts;
}

// calculating gpa 
double Student::getGPA() const {
    int totalCreds = getTotalCredits();
    if (totalCreds == 0) {
        return 0.0;
    }
    return getTotalPoints() / totalCreds;
}

// checking gpa to see the students standing 
string Student::getStanding() const {
    double gpa = getGPA();
    if (gpa >= 3.70) {
        return "Dean's List";
    } else if (gpa >= 2.00) {
        return "Good Standing";
    } else {
        return "Probation";
    }
}


void Student::printReport() const {
    cout << fixed << setprecision(2); // setting floating-point numbers to 2 decimal places
    
    cout << "\n==================== Student Grade Report ====================\n";
    cout << "Student:  " << name << "\n\n";
    
    // setting fixed column widths and alignment for the table headers
    cout << left << setw(30) << "Course" 
         << right << setw(10) << "Credits" 
         << setw(12) << "GradePts" 
         << setw(12) << "TotalPts" << "\n";
              
    cout << "-------------------------------------------------------------\n";
    

    for (const auto& c : courses) {
        cout << left << setw(30) << c.getcourseName()
             << right << setw(10) << c.getCredits()
             << setw(12) << c.getgradePts()
             << setw(12) << c.gettotalPts() << "\n";
    }
    
    cout << "-------------------------------------------------------------\n";
    
    // printing summary totals and final standing 
    cout << left << setw(30) << "Total Credits:" 
         << right << setw(10) << getTotalCredits() << "\n";
              
    cout << left << setw(30) << "Total Points:" 
         << right << setw(10) << getTotalPoints() << "\n";
              
    cout << left << setw(30) << "Semester GPA:" 
         << right << setw(10) << getGPA() << "\n";
              
    cout << left << setw(30) << "Standing:" 
         << right << setw(10) << getStanding() << "\n";
              
    cout << "=============================================================\n";
}

// using sort to arrange courses by credit hours in descending order
void Student::sortCoursesByCreditsDesc() {
    sort(courses.begin(), courses.end(), [](const Course& a, const Course& b) {
        return a.getCredits() > b.getCredits();
    });
}

// using sort to arrange courses in abc order by name
void Student::sortCoursesByNameAsc() {
    sort(courses.begin(), courses.end(), [](const Course& a, const Course& b) {
        return a.getcourseName() < b.getcourseName();
    });
}
