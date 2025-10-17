#include<iostream> 
using namespace std; 
// Base class 'person' 
class person { 
protected: 
    string name;   // Protected member: accessible in derived class 
    char gender; 
    int age; 
    // Protected member function to input personal details 
    void get() { 
        cout << "Enter name, age, gender: "; 
        cin >> name >> age >> gender; 
    } 
}; 
 
 
 
 
// Derived class 'student' inherits from 'person' 
class student : public person { 
private: 
    int pinno;     // Private data members specific to student 
    float per; 
public: 
    // Member function to initialize student-specific details 
    void getst() { 
        pinno = 170; 
        per = 90.5; 
        // Call base class's protected get() function to input personal details 
        get(); 
    } 
    // Member function to display all details 
    void display() { 
        cout << "Name       : " << name << endl; 
        cout << "Age        : " << age << endl; 
        cout << "Gender     : " << gender << endl; 
        cout << "Pin no     : " << pinno << endl; 
        cout << "Percentage : " << per << endl; 
    } 
}; 
int main() { 
    student s;      // Create object of derived class 
 
 
s.getst();      
// Input student and personal details 
s.display();    // Display all details 
return 0; 
}