//Write a program to create a calculator that performs basic arithmetic
//operations, for the division operation use the appropriate data-type.
#include<iostream>
using namespace std;
class calculator
{
    public:
    float a,b;
    void add()
    {
        float c=a+b;
        cout<<"Addition of 2 given numbers is\t"<<c;
    }
    void subtract()
    {
        float d=a-b;
        cout<<"Subtraction of 2 given numbers is\t"<<d;
    }
    void multiply()
    {
        float e=a*b;
        cout<<"Multiplication of 2  given numbers is\t"<<e;
    }
    void divide()
    {
        float f=a/b;
        cout<<"Division of 2 given numbers is\t"<<f;
    }
    void modulus()
    {
        int g=(int)a%(int) b;
        cout<<"Modulus of 2 numbers is\t"<<g;
    }
    
};
int main()
{
    int n;
    calculator operation;
    cout<<"Enter First Number\t";
    cin>>operation.a;
    cout<<"Enter Second Number\t";
    cin>>operation.b;
    cout<<"1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus(Remainder)\n";
    cout<<"Enter operation number for operation needed to be performed\t";
    cin>>n;
    switch(n)
    {
    case 1:
    operation.add();
    break;
    case 2:
    operation.subtract();
    break;
    case 3:
    operation.multiply();
    break;
    case 4:
    operation.divide();
    break;
    case 5:
    operation.modulus();
    break;
    default:
    cout<<"Operation not given";
    break;
    }
return 0;
}