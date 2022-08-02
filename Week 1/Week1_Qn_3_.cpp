//Write a program to implement the different types of inheritance:
//C++ 
//● Single Inheritance.
//● Multiple Inheritance
//● Multilevel
//Inheritance
//● Hybrid Inheritance
//● Hierarchical
//Inheritance.
#include<iostream>
using namespace std;
class fraction
{
public:
float x,y;
float div()
{
float d=x/y;
cout<<"Fraction is\t"<<d<<"\n";
return d;
}
};
class mult
{
public:
float m;

};
class percentage:public fraction
{
public:
float display()
{
float fra=div();
float percent=fra*100;
cout<<"Percentage is\t"<<percent<<"\n";
return percent;
}
};
class added_fraction:public fraction
{
public:
float a;
float display1()
{
float fra1=div();
float added_fr=fra1+a;
cout<<"Added fraction is\t"<<added_fr<<"\n";
return 0;
}
};
class percentage_to_fraction:public percentage
{
public:
float display2()
{
float perc=display();
float percent_to_fraction=perc/100;
cout<<"Original fraction is\t"<<percent_to_fraction<<"\n";
return 0;
}
};
class multiplied_fraction:public fraction,public mult
{
public:
float display3()
{
float fra2=div();
float mul_fra=fra2*m;
cout<<"Multiplied fraction\t"<<mul_fra<<"\n";
return mul_fra;
}
};
class mul_fr_original: public multiplied_fraction
{
public:
float display4()
{
float mf= display3();
float mf_origin=mf/m;
cout<<"Original fraction is\t"<<mf_origin<<"\n";
return 0;
}
};
int main()
{
//single inheritance(percentage from fraction)
percentage per;
cout<<"Single inheritance first number \t";
cin>>per.x;
cout<<"Single inheritance second number\t";
cin>>per.y;
per.display();
//hierarchical inheritance(percentage,added_fraction from fraction)
percentage per1;
added_fraction add_fr;
cout<<"Hierarchical inheritance first number \t";
cin>>per1.x;
add_fr.x=per1.x;
cout<<"Hierarchical inheritance second number \t";
cin>>per1.y;
add_fr.y=per1.y;
cout<<"number to be added in added fraction\t";
cin>>add_fr.a;
per1.display();
add_fr.display1();
//multilevel inheritance(percentage from fraction,percentage_to_fraction from percentage)
percentage_to_fraction fr;
cout<<"Multilevel inheritance first number\t";
cin>>fr.x;
cout<<"Multilevel inheritance second number\t";
cin>>fr.y;
fr.display2();
//multiple inheritance(multiplied_fraction from fraction,mult)
multiplied_fraction mul_fr;
cout<<"Multiple inheritance first number\t";
cin>>mul_fr.x;
cout<<"Multiple inheritance second number\t";
cin>>mul_fr.y;
cout<<"Multiple inheritance number to be multiplied\t";
cin>>mul_fr.m;
mul_fr.display3();
//hybrid inheritance(Here multiple and single inheritance)
mul_fr_original mf_o;
cout<<"Hybrid inheritance first number \t";
cin>>mf_o.x;
cout<<"Hybrid inheritance second number\t";
cin>>mf_o.y;
cout<<"Hybrid inheritance number to be multiplied\t";
cin>>mf_o.m;
mf_o.display4();
return 0;
}