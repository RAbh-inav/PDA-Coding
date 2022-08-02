//Write a program to create a student class, the class should have the members
//name, rollno, age, phone number.Get the details of the student as input and
//then print the details of the student.
#include<iostream>
using namespace std;
class student
{
public:
string Name;
int roll_no;
int age;
string phone_number;// As phone number has 10 digits,it is better o represent it as string
void output()
{
cout<<"\n Student's name is \t"<<Name;
cout<<"\n Student's roll no is \t"<<roll_no;
cout<<"\n Student's age is \t"<<age;
cout<<"\n Student's phone number is \t"<<phone_number;
}
};
int main()
{
student s;
cout<<" Enter Student's name \t";
cin>>s.Name;
cout<<"\n Enter Student's roll no \t";
cin>>s.roll_no;
cout<<"\n Enter Student's age \t";
cin>>s.age;
cout<<"\n Enter Student's phone number \t";
cin>>s.phone_number;
s.output();
return 0;
}