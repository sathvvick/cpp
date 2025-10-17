#include <iostream> 
using namespace std; 
class Person { 
private: 
string secretCode;  // Accessible only within the class 
protected: 
string address;     
public: 
string name;        
// Accessible within class and derived classes 
// Accessible from anywhere 
int age; 
// Public member function to set private and protected members 
void setDetails(string n, int a, string addr, string code) { 
name = n; 
age = a; 
address = addr; 
secretCode = code; 
} 
// Public function to display details 
void showDetails() { 
cout << "Name: " << name << endl; 
cout << "Age: " << age << endl; 
cout << "Address: " << address << endl; 
cout << "Secret Code: " << secretCode << endl; 
} 
}; 
int main() { 
Person p; 
// Accessing public members directly 
p.name = "Nick"; 
p.age = 25; 
// Can't access private/protected members directly: 
// p.address = "New York";     
//  Error 
// p.secretCode = "XYZ123";    //  Error 
// Set all values using a public method 
p.setDetails("Nick", 25, "London", "ABCDE6767"); 
// Display all details using a public method 
p.showDetails(); 
return 0; 
}