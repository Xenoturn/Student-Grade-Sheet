#include <iostream>
#include "Course.H"

using namespace std;

Course::Course(string n, int c, string g){ //Parameterized constructor
    courseName = n;
    credits = c;
    letterGrade = g;
    
}


string Course::getcourseName() const{ //keeps values constant and returns whats needed
    return courseName;
}

int Course::getCredits() const{
    return credits;
}

string Course::getletterGrade() const{
    return letterGrade;
}

double Course::getgradePts() const{ //I chose to do an if else with or's to be to include case-sensitive letters
    if (letterGrade == "A" ||letterGrade == "a"){
        return 4.0;
    } else if (letterGrade == "A-" ||letterGrade ==  "a-"){
        return 3.7;
    } else if (letterGrade == "B+" || letterGrade == "b+"){
        return 3.3;
    } else if (letterGrade == "B" || letterGrade == "b"){
        return 3.0;
    } else if (letterGrade == "B-" || letterGrade == "b-"){
        return 2.7;
    } else if (letterGrade == "C+" || letterGrade == "c+"){
        return 2.3;
    } else if (letterGrade == "C" || letterGrade == "c"){
        return 2.0;
    } else if (letterGrade == "C-" || letterGrade == "c-"){
        return 1.7;
    } else if (letterGrade == "D+" || letterGrade == "d+"){
        return 1.3;
    } else if (letterGrade == "D" || letterGrade == "d"){
        return 1.0;
    } else if (letterGrade == "D-" ||letterGrade ==  "d-"){
        return 0.7;
    } else if (letterGrade == "F" || letterGrade == "f"){
        return 0.0;
}
return 0;
}
double Course::gettotalPts() const{ //returns the letter grade and what they equal to in points multiplied the credit hours
    return credits * getgradePts();
    
}
