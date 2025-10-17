#include<iostream> 
using namespace std; 
// Base class 1: Personal details 
class Person { 
public: 
    string name; 
    int age; 
    void get(string n, int a) { 
        name = n; 
        age = a; 
    } 
}; 
// Base class 2: Academic details 
class Student { 
public: 
    int rollNo; 
    float percentage; 
 
    void getst(int r, float p) { 
        rollNo = r; 
        percentage = p; 
    } 
}; 
 
 
 
// Derived class: Inherits from both Person and Student 
class Result : public Person, public Student { 
public: 
    void display() { 
        cout << "Name        : " << name << endl; 
        cout << "Age         : " << age << endl; 
        cout << "Roll No     : " << rollNo << endl; 
        cout << "Percentage  : " << percentage << "%" << endl; 
    } 
}; 
int main() { 
    Result r; 
    // Set data using base class functions 
    r.get("satwik", 18); 
    r.getst(170, 90.5); 
    r.display();               // Display combined result 
    return 0; 
} 
 
 
