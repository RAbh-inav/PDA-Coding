//5.Write a C++ program to separate 0s and 1s from a given array of values 0
//and 1.
//Eg: Original array: 0 1 0 0 1 1 1 0 1 0
//Array after seperating: 0 0 0 0 0 1 1 1 1 1
#include<iostream>
using namespace std;
int main()
{
int size;
int arr[100];
int count=0;
int count1=0;
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
for(int i=0;i<size;i++)
{
    if(arr[i]==0)
    {
        count++;
    }
    else if(arr[i]==1)
    {
        count1++;
    }
}
for(int i=0;i<count;i++)
{
    arr[i]=0;
}
for(int i=0;i<count1;i++)   
{
    arr[i+count]=1;
}
cout<<"Value of changed array is\n";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<"\t";
}
return 0;
}