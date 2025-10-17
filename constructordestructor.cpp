#include <iostream> 
using namespace std; 
class Person { 
private: 
string name; 
int age; 
public: 
// Constructor 
Person(string n, int a) { 
name = n; 
age = a; 
cout << "Constructor called for " << name << endl; 
} 
// Destructor 
~Person() { 
cout << "Destructor called for " << name << endl; 
} 
void display() { 
cout << "Name: " << name << ", Age: " << age << endl; 
} 
}; 
int main() { 
Person p1("Nitish", 20); 
p1.display(); 
{ 
Person p2("Jadeja", 25); 
p2.display(); 
}  // p2 goes out of scope here, destructor is called 
cout << "End of main function" << endl; 
return 0;
}