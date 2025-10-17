#include <iostream> 
#include <cmath>   // for sqrt() 
using namespace std; 
int main() { 
    double a, b, c, discriminant, root1, root2; 
 
    cout << "Enter coefficients a, b and c: "; 
    cin >> a >> b >> c; 
 
    if (a == 0) { 
        cout << "This is not a quadratic equation (a cannot be 0)." << endl; 
        return 0; 
    } 
    discriminant = b * b - 4 * a * c; 
    if (discriminant > 0) { 
        // Two distinct real roots 
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a); 
        cout << "Roots are real and different." << endl; 
        cout << "Root 1 = " << root1 << endl; 
        cout << "Root 2 = " << root2 << endl; 
    } 
    else if (discriminant == 0) { 
        // One real root (repeated) 
        root1 = -b / (2 * a); 
        cout << "Roots are real and equal." << endl; 
        cout << "Root = " << root1 << endl; 
    } 
    else { 
        // Complex roots 
        double realPart = -b / (2 * a); 
        double imaginaryPart = sqrt(-discriminant) / (2 * a); 
        cout << "Roots are complex and different." << endl; 
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl; 
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl; 
    } 
    return 0; 
}