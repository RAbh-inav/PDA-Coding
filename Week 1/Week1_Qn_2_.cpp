//Write a program to input marks of five subjects Physics, Chemistry,
//Biology, Mathematics and Computer. Calculate percentage and print the
//grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade 
//Percentage < 40% : Grade F
//(Hint: Use if else conditions)
#include<iostream>
using namespace std;
class Subject_grade
{
    public:
    float marks,total;
    void grade(int total)
    {
    float percent= (marks/total)*100;
    if(percent>=90)
    {
        cout<<"GRADE A\n";
    }
    else if(percent>=80)
    {
        cout<<"GRADE B\n";
    }
    else if(percent>=70)
    {
        cout<<"GRADE C\n";
    }
    else if(percent>=60)
    {
        cout<<"GRADE D\n";
    }
    else if(percent>=40)
    {
        cout<<"GRADE E\n";
    }
    else if(percent<40)
    {
        cout<<"GRADE F\n";
    }
    else
    {
        cout<<"Error\n";
    }
    }
};
int main()
{
int i,N,total_marks,sub_no;
Subject_grade Physics;
Subject_grade Chemistry;
Subject_grade Biology;
Subject_grade Mathematics;
Subject_grade Computer_Science;
N=5;
cout<<"Enter total marks provided for each subject\t";
cin>>total_marks;
cout<<"1.Physics\n2.Chemistry\n3.Biology\n4.Mathematicss\n5.Computer Science\n";
for(i=0;i<N;i++)
{
cout<<"\nEnter subject number\t";
cin>>sub_no;
switch (sub_no)
{
    case 1:
    cout<<"\nPhysics marks\t";
    cin>>Physics.marks;
    Physics.grade(total_marks);
    break;
    case 2:
    cout<<"\nChemistry marks\t";
    cin>>Chemistry.marks;
    Chemistry.grade(total_marks);
    break;
    case 3:
    cout<<"\nBiology marks\t";
    cin>>Biology.marks;
    Biology.grade(total_marks);
    break;
    case 4:
    cout<<"\nMathematics marks\t";
    cin>>Mathematics.marks;
    Mathematics.grade(total_marks);
    break;
    case 5:
    cout<<"\nComputer Science marks\t";
    cin>>Computer_Science.marks;
    Computer_Science.grade(total_marks);
    break;
    default:
    cout<<"No other subject";
    break;
}
}
return 0;
}