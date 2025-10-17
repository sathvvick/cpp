#include<iostream> 
using namespace std; 
// Define a class named 'unary' 
class unary { 
    int x, y, z;  // Private data members 
public: 
    // Member function to initialize values 
    void get() { 
        x = 10; 
        y = -20; 
        z = -34; 
    } 
    // Member function to display values 
    void show() { 
        cout << "X = " << x << endl; 
        cout << "Y = " << y << endl; 
        cout << "Z = " << z << endl; 
    } 
 
     
// Overload unary minus operator using member function 
    void operator -() { 
        x = -x;  // Negate x 
        y = -y;  // Negate y 
        z = -z;  // Negate z 
    } 
}; 
 
int main() { 
    unary u;      // Create object of class 'unary' 
    u.get();      // Initialize values 
    -u;           // Apply overloaded unary minus operator (calls u.operator-()) 
    u.show();     // Display updated values 
    return 0; 
}