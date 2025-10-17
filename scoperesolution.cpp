#include <iostream> 
using namespace std; 
// Namespace for student details 
namespace Student { 
string name = "Nitish"; 
int age = 20; 
void showDetails() { 
cout << "Student Name: " << name << endl; 
cout << "Student Age: " << age << endl; 
} 
} 
// Namespace for teacher details 
namespace Teacher { 
string name = "Jadeja"; 
int age = 40; 
void showDetails() { 
cout << "Teacher Name: " << name << endl; 
cout << "Teacher Age: " << age << endl; 
} 
} 
int main() { 
// Accessing variables from Student namespace 
Student::showDetails(); 
cout << endl; 
// Accessing variables from Teacher namespace 
Teacher::showDetails(); 
return 0; 
}