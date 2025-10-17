#include<iostream> 
using namespace std; 
// Base class: student 
class student { 
protected: 
    int rollno; 
    string name; 
public: 
    // Function to input student details 
    void getst() { 
        cout << "Enter rollno, name: "; 
        cin >> rollno >> name; 
    } 
    // Function to display student details 
    void showst() { 
        cout << "Rollno : " << rollno << endl; 
        cout << "Name   : " << name << endl; 
    } 
}; 
// Derived class: marks inherits from student (Single Inheritance) 
class marks : public student { 
protected: 
 
 
    int CPP, DBMS, TOC; 
    // Function to input marks 
    void getm() { 
        getst();  // Call base class function 
        cout << "Enter marks for CPP, DBMS, TOC: "; 
        cin >> CPP >> DBMS >> TOC; 
    } 
}; 
// Independent class: SABL (not related to student) 
class SABL { 
protected: 
    int sablscore; 
public: 
    // Function to input SABL score 
    void getsabl() { 
        cout << "Enter SABL Score: "; 
        cin >> sablscore; 
    } 
    // Function to display SABL score 
    void showsabl() { 
        cout << "SABL Score : " << sablscore << endl; 
    } 
}; 
// Derived class: percentage inherits from both marks and SABL (Hybrid Inheritance) 
 
 
 
 
class percentage : public marks, public SABL { 
public: 
    // Function to gather all inputs 
    void get() { 
        getm();       // From marks → student 
        getsabl();    // From SABL 
    } 
    // Function to calculate and display overall percentage 
    void calculateper() { 
        int per = (CPP + DBMS + TOC + sablscore) / 4; 
        showst();     // From student 
        showsabl();   // From SABL 
        cout << "OVERALL PERCENTAGE : " << per << "%" << endl; 
    } 
}; 
int main() { 
    percentage p;     // Create object of most derived class 
    p.get();          // Input all data 
    p.calculateper(); // Display result 
    return 0; 
} 
 