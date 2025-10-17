#include<iostream> 
using namespace std; 
// Define a class named 'complex' ; 
class complex { 
    int real, imag;  // Private data members for real and imaginary parts 
public: 
    // Member function to input values 
    void get() { 
        cout << "Enter real, imag values: "; 
        cin >> real >> imag; 
    } 
    // Overload binary '+' operator using member function 
    void operator +(complex c2) { 
        // Add real parts and imaginary parts separately 
        cout << real + c2.real << "+" << imag + c2.imag << "i" << endl; 
    } 
}; 
int main() { 
    complex c1, c2;   // Create two complex number objects 
    c1.get();         // Input values for first complex number 
    c2.get();         // Input values for second complex number 
    c1 + c2;          // Apply overloaded '+' operator (calls c1.operator+(c2)) 
    return 0; 
} 
