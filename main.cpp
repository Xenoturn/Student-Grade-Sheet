#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main(){
    string studentName;
    string course;
    int courseNum;
    int credits;
    string letterGrade;
    
   
   cout << "Enter Student Name: ";
     getline(cin, studentName); //reads the users full name
   Student jjay(studentName); //stores the users full name in the class

    

   
  cout << "Enter the number of course you'd like to calculate (1 to 10): ";
  cin >> courseNum;
  
    while(cin.fail() || courseNum < 1 || courseNum > 10){
        cerr << "Error: enter an integer between 1 and 10." << endl;
        cin.clear(); //resets the cin stream after an error has occured
        cin.ignore(1000, '\n'); //usually used after the cin.clear, to get rid of the unwanted characters from the input buffer
        cout << "Enter the number of courses you'd like to calculate (1 to 10): "; //reprompts the question
        cin >> courseNum; //takes in another answer
    }
    cin.ignore(1000, '\n');



for (size_t i = 0; i < courseNum; i++){ //for loop for each course, size_t returns size of
    cout << "Enter course " << i + 1 << " name: ";
    getline(cin, course);
    
    cout << "Course name entered: " << course << endl;
    
    cout << "Enter number of credits: ";
    cin >> credits;
    
    while(cin.fail() || credits < 0 || credits > 4){
    cerr << "Error: enter a whole number that is 0 or higher." << endl;
    cin.clear();
    cin.ignore(1000, '\n'); 
    cout << "Enter number of credits: ";
    cin >> credits;
}
    cin.ignore(1000, '\n');
    
    
    cout << "Enter your letter grade for the course: ";
    cin >> letterGrade;
    
    for (size_t y = 0; y < letterGrade.length(); y++){
    letterGrade[y] = toupper(letterGrade[y]); //allows the calculator to read lowercase character as the course.cpp allows lowercase
}

while (letterGrade != "A" && letterGrade != "A-" && letterGrade != "B+" && letterGrade != "B" && letterGrade != "B-" && letterGrade != "C+" &&
    letterGrade != "C" && letterGrade != "C-" && letterGrade != "D" && letterGrade != "F"){
    
    cerr << "Error: This is not a valid letter grade for this calculator." << endl;
    
    cout << "Enter your letter grade for the course: ";
    cin >> letterGrade;
    for (size_t y = 0; y < letterGrade.length(); y++){
    letterGrade[y] = toupper(letterGrade[y]);
}
}
cin.ignore(1000, '\n');
    
jjay.addCourse(Course(course, credits, letterGrade)); //if everything is fine, the course is added and the loop runs again

}

jjay.sortCoursesByNameAsc(); //sorts the courses by its name
jjay.printReport(); //prints out the final report to the user
}


