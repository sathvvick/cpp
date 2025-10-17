#include <iostream> 
using namespace std; 
// Function with default arguments 
void printDetails(string name, int age = 29, string country = "India") { 
    cout << "Name: " << name << endl; 
    cout << "Age: " << age << endl; 
    cout << "Country: " << country << endl; 
    cout << "-----------------------" << endl; 
} 
 
int main() { 
    // Calling with all arguments 
    printDetails("Nitish", 25, "India"); 
 
    // Calling with only two arguments (country uses default) 
    printDetails("Jadeja", 30); 
 
    // Calling with only one argument (age and country use defaults) 
    printDetails("Shubman"); 
    return 0; 
}