#include <iostream> 
using namespace std; 
class Box { 
private: 
double length; 
public: 
// Constructor 
Box(double l) { 
length = l; 
} 
// Declare friend function 
friend void printLength(Box b); 
}; 
// Friend function definition 
void printLength(Box b) { 
// Accessing private member of class Box 
cout << "Length of the box: " << b.length << " units" << endl; 
} 
int main() { 
Box b1(6.7); 
// Call the friend function 
printLength(b1); 
return 0; 
} 