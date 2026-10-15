#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

class Course{
    private: //keeps the name, credits and letter grade secure
    string courseName;
    int credits;
    string letterGrade;
   
    
    public:
    
    Course(string n, int c, string l); //parameterized
    
    //gets the course name and make sure it's on a read-only basis (unable to be modified)
    string getcourseName() const; 
     int getCredits() const;
     string getletterGrade() const;
      double gettotalPts() const;
      double getgradePts() const;
    
    
};

#endif
