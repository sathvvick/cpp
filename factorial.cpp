#include <iostream> 
using namespace std; 
 
// Recursive function to calculate factorial 
long long factorial(int n) { 
    if (n == 0 || n == 1)  // Base case 
        return 1; 
    else 
        return n * factorial(n - 1);  // Recursive call 
} 
 
int main() { 
    int num; 
    cout << "Enter a positive integer: "; 
    cin >> num; 
    if (num < 0) { 
        cout << "Factorial is not defined for negative numbers." << endl; 
    } else { 
        cout << "Factorial of " << num << " = " << factorial(num) << endl; 
    } 
    return 0; 
} 
 
