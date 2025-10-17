#include<iostream> 
using namespace std; 
// Define a class named 'unary' 
class unary { 
    int x, y, z;             // Private data members 
public: 
    // Member function to initialize values 
    void get() { 
        x = 20; 
        y = 10; 
        z = -55; 
    } 
    // Member function to display values 
    void show() { 
        cout << "X = " << x << endl; 
        cout << "Y = " << y << endl; 
        cout << "Z = " << z << endl;} 
     
 
 
    // Declare friend function to overload unary minus 
    friend void operator -(unary &u); 
}; 
 
// Define the friend function outside the class 
void operator -(unary &u) { 
    u.x = -u.x;            // Negate x 
    u.y = -u.y;            // Negate y 
    u.z = -u.z;            // Negate z 
} 
 
int main() { 
    unary u;                // Create object of class 'unary' 
    u.get();                 // Initialize values 
    -u;                     // Apply overloaded unary minus operator (calls friend function) 
    u.show();             // Display updated values 
    return 0; 
} 
 
 
