#include <iostream> 
using namespace std; 
// 1. Global Variable 
int var = 99; 
// 3. Namespace Example 
namespace MyNamespace { 
int var = 200; 
void show() { 
cout << "Namespace var: " << var << endl; 
} 
} 
// 2. Class Example (Using scope resolution for static members) 
class MyClass { 
public: 
static int count; 
static void showCount(); 
}; 
// Define static variable outside the class using scope resolution 
int MyClass::count = 50; 
// Define static function outside the class using scope resolution 
void MyClass::showCount() { 
cout << "Static count from MyClass: " << count << endl; 
} 
int svar = 22; // Shadows global variable 
int main() { 
int var = 44; 
// 1. Global scope resolution 
cout << "Global var: " << ::var << endl;  // Refers to global var = 100 
// 2. Class scope resolution (static variable & function) 
cout << "Accessing static variable: " << MyClass::count << endl; 
MyClass::showCount(); 
// 3. Namespace scope resolution 
MyNamespace::show(); 
    
 
 return 0; 
} 
 