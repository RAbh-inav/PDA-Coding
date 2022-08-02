//2. Write a program to input an one-dimensional array, get the size of the array
//as an input from the user and then find the largest and second largest
//element in the array( Should not use Sorting).
#include<iostream>
using namespace std;
int main()
{
int size;
int largest,largest1;
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
largest=arr[0];
for (int i=0;i<size;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
largest1=arr[0];
for (int i=0;i<size;i++)
{
    
    if(arr[i]>largest1 && arr[i]<largest)
    {
        largest1=arr[i];
    }
}
cout<<"\nLargest value in array is\t"<<largest;
cout<<"\nSecond largest value in array is\t"<<largest1;
return 0;
}