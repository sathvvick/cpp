#include <iostream> 
using namespace std; 
class Person { 
private: 
string name; 
int age; 
public: 
// Parameterized constructor 
Person(string n, int a) { 
name = n; 
age = a; 
cout << "Parameterized constructor called." << endl; 
} 
// Copy constructor 
Person(const Person &p) { 
name = p.name; 
age = p.age; 
cout << "Copy constructor called." << endl; 
} 
// Display method 
void display() { 
cout << "Name: " << name << ", Age: " << age << endl; 
} 
}; 
int main() { 
// Create an object using the parameterized constructor 
Person person1("Nitish", 24); 
person1.display(); 
// Create a copy using the copy constructor 
Person person2(person1);  // Copy constructor is called here 
person2.display(); 
return 0; 
}