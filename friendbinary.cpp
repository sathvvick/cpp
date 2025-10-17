#include<iostream> 
using namespace std; 
 
// Define a class named 'complex'; 
class complex { 
    int real, imag;     // Private data members for real and imaginary parts 
 
public: 
    // Member function to input values 
    void get() { 
        cout << "Enter real, imag values: "; 
        cin >> real >> imag; 
    } 
 
    // Declare friend function to overload '+' operator 
    friend void operator +(complex &c1, complex &c2); 
}; 
// Define the friend function outside the class 
void operator +(complex &c1, complex &c2) { 
         // Access private members directly since it's a friend 
         // Add real parts and imaginary parts separately 
    cout << c1.real + c2.real << "+" << c1.imag + c2.imag << "i" << endl; 
} 
 
 
int main() { 
complex c1, c2;      
c1.get();            
c2.get();            
c1 + c2;            
// Create two complex number objects 
// Input values for first complex number 
// Input values for second complex number 
// Apply overloaded '+' operator (calls friend function) 
return 0; 
}