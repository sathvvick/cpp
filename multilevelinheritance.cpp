#include<iostream> 
using namespace std; 
class student                      // Base class: student 
{                
protected: 
    string name; 
    int rollno; 
    // Function to input student details 
    void getst() { 
        cout << "Enter Name, Rollno: "; 
        cin >> name >> rollno; 
    } 
    // Function to display student details 
    void showst() { 
        cout << "Name     : " << name << endl; 
        cout << "Roll No  : " << rollno << endl; 
    } 
}; 
// Derived class: marks inherits from student 
class marks : public student { 
protected: 
    int DBMS, CPP, TOC, ASE, HTML; 
 
 
 
    // Function to input marks 
    void getm() { 
        getst();                  // Call base class function to get student details 
        cout << "Enter marks of DBMS, CPP, TOC, ASE, HTML: "; 
        cin >> DBMS >> CPP >> TOC >> ASE >> HTML; 
    } 
}; 
// Derived class: percentage inherits from marks (multilevel) 
class percentage : public marks { 
public: 
    float per; 
    // Function to calculate and display percentage 
    void showp() { 
        getm();  // Call marks class function to get marks and student details 
        per = (float)(DBMS + CPP + TOC + ASE + HTML) / 5;  // Calculate average 
        showst();  // Display student details 
        cout << "Percentage : " << per << "%" << endl; 
    } 
}; 
int main() { 
    percentage p;                 // Create object of most derived class 
    p.showp();                     // Call function to input data and display result 
    return 0; 
 
 
 
 
}