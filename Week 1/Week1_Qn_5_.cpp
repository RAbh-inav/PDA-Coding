//Write any program to implement polymorphism.
//Compile time polymorphism by function overloading will be done here
#include<iostream>
using namespace std;
class function_overload
{
public:
void div(int X,int Y)
{
int div1= X/Y;
cout<<"\nDivision of 2 integers given is\t"<<div1;
}
void div(float X,float Y)
{
float div2= X/Y;
cout<<"\nDivision of 2 floating point numbers given is\t"<<div2;
}
};
int main()
{
int a,b,i,n,DIV_NO;
float c,d;
function_overload fun;
n=2;
cout<<"1. Integer division\n2.Floating point numbers division\n";
for(i=0;i<n;i++)
{
cout<<"\nEnter number for type of division\t";
cin>>DIV_NO;
switch (DIV_NO)
{
case 1:
cout<<"\nEnter first integer\t";
cin>>a;
cout<<"\nEnter second integer\t";
cin>>b;
fun.div(a,b);
break;
case 2:
cout<<"\nEnter first floating point number\t";
cin>>c;
cout<<"\nEnter second floating point number\t";
cin>>d;
fun.div(c,d);
break;
default:
cout<<"\nError";
break;
}
}
return 0;
}