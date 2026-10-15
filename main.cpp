#include <iostream>
#include <iomanip> //allows the code to manipulate itself and create presentable data
#include "Course.H"
using namespace std;

//THIS IS FAR FROM THE FINAL VERSION

int main(){
    
    /*string name;
    string course = "Algebra";
    int credits = 0;
    double gradePts = 4.0;
    double TotalPts = 12.0;*/
    
    //test code
    Course c("MATH 141", 4, "A-");
    cout << c.getgradePts() << endl;    
    cout << c.gettotalPts() << endl;
   
   /* cout << "Enter Student Name: ";
    
   getline(cin,name);
   if(!(cin >> name)){
       cerr << "Error: Please enter a valid name";
       return 1;
   }
   cout << "Enter credit number: ";
   
   cin >> credits;
   
   if(!(cin >> credits)){
       cerr << "Error: Please enter a number";
       return 1;
   } 
   
   if(credits < 0 || credits > 4){
       cerr << "Error: the credit number you entered is too high or low";
       return 1;
   }
    
    cout << setfill('=') << setw(50) << " John Jay Student Grade Report " << setw(20) << " " <<  endl;
    
    cout << setfill(' ');
    
    cout << "Student: " << name << endl;
    
    cout << left << setw(25) << "Course" << right << setw(6) << "Credits"<< setw(10) << "GradePts" << setw(10) << "TotalPts" << endl;
    
    cout << setfill('-') << setw(69) << "" << endl;
    
    cout << setfill(' ');
    
    cout << left << setw(25) << course << right << setw(6) << credits << setw(10) << gradePts << setw(10) << TotalPts << endl;
    
*/
}
