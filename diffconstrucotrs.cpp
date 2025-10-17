#include <iostream> 
using namespace std; 
 
class Rectangle { 
private: 
    int length; 
    int width; 
 
public: 
    // Default constructor 
    Rectangle() { 
        length = 0; 
        width = 0; 
        cout << "Default constructor called." << endl; 
    } 
 
    // Parameterized constructor (1 argument) 
    Rectangle(int l) { 
        length = l; 
         
width = l;  // Square 
        cout << "Parameterized constructor with 1 argument called." << endl; 
    } 
// Parameterized constructor (2 arguments) 
Rectangle(int l, int w) { 
length = l; 
width = w; 
cout << "Parameterized constructor with 2 arguments called." << endl; 
} 
int area() { 
return length * width; 
} 
}; 
int main() { 
Rectangle r1;            
Rectangle r2(12);         
Rectangle r3(3,8);      
// Calls default constructor 
// Calls 1-arg constructor 
// Calls 2-arg constructor 
cout << "Area of r1: " << r1.area() << endl; 
cout << "Area of r2: " << r2.area() << endl; 
cout << "Area of r3: " << r3.area() << endl; 
return 0; 
}