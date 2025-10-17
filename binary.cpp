#include<iostream>
using namespace std;
class complex
{
    int real , img;
    public:
    void get()
    {
        cout<<"enter the real , imag values:";
        cin>>real>>img;

    }
    void operator +(complex c2)
    {
        cout<<real+c2.real<<"+"<<imag+c2.imag<<"i"<<endl;
    }

};
int main()
{
    complex c1 , c2;
    c1.get();
    c2.get();
    c1+c2;
    return 0;
}
