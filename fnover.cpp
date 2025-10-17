#include <iostream> 
using namespace std; 
// Function to add two integers 
int add(int a, int b) { 
return a + b; 
} 
// Function to add two floating-point numbers 
float add(float a, float b) { 
return a + b; 
} 
// Function to add three integers 
int add(int a, int b, int c) { 
return a + b + c; 
} 
int main() { 
int x = 6, y = 12, z = 15; 
float f1 = 4.1, f2 = 7.9; 
// Call different overloaded versions of add() 
cout << "add(int, int): " << add(x, y) << endl; 
cout << "add(float, float): " << add(f1, f2) << endl; 
cout << "add(int, int, int): " << add(x, y, z) << endl; 
return 0; 
}