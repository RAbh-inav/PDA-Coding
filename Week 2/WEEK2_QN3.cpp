//3.Write a program to input an one-dimensional array, get the size of the array
//as an input from the user and then reverse all the elements in the array and
//then print the array.
#include<iostream>
using namespace std;
int main()
{
int size;
int arr[100];
cout<<"Enter size of array\n";
cin>>size;
for (int i=0;i<size;i++)
{
    cout<<"Enter value of"<< i<<"th element\n";
    cin>>arr[i];
}
cout<<"Original array is\n";
for (int i=0;i<size;i++)
{
    cout<<arr[i]<<"\t";
}
cout<<"\n";
cout<<"Reversed array is\n";
for (int i=0;i<size;i++)
{
    int diff=size-i-1;
    cout<<arr[diff]<<"\t";
}
return 0;
}