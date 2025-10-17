#include<iostream> 
using namespace std; 
// Base class: Animal 
class Animal { 
protected: 
    string name; 
    int legs; 
public: 
    void get(string n, int l) { 
        name = n; 
        legs = l; 
    } 
    void show() { 
        cout << "Animal Name : " << name << endl; 
        cout << "No. of Legs : " << legs << endl; 
    } 
}; 
// Derived class 1: Dog inherits from Animal 
class Dog : public Animal { 
public: 
    void bark() { 
        get("Dog", 4); 
 
 
        show();        
 cout << "Sound   : Woofff Woofff!" << endl; 
    } 
}; 
// Derived class 2: Cat inherits from Animal 
class Cat : public Animal { 
public: 
    void meow() { 
        get("Cat", 4); 
        show(); 
        cout << "Sound   : Meoow Meoow!" << endl; 
    } 
}; 
// Derived class 3: Cow inherits from Animal 
class Cow : public Animal { 
public: 
    void moo() { 
        get("Cow", 4); 
        show(); 
        cout << "Sound   : Moooh Moooh!" << endl; 
    } 
}; 
int main() { 
    Dog d; 
 
 
    Cat c; 
   Cow cw; 
    cout << "\n--- Dog Details ---\n"; 
    d.bark(); 
cout << "\n--- Cat Details ---\n"; 
c.meow(); 
cout << "\n--- Cow Details ---\n"; 
cw.moo(); 
return 0;} 