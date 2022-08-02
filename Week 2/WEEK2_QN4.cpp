// 4.Write a program to input an one-dimensional array, get the size of the array
//as an input from the user and then print all unique elements of an array.
#include<iostream>
using namespace std;
int main()
{
int size;
int arr[100];
int count;
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
cout<<"Unique values are\t";
for (int i=0;i<size;i++)
{
    int comp=arr[i];
    count=0;
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]==comp)
        {
            arr[j]=0;
            count++;
        }
    }
    if(count)
    {
        arr[i]=0;
    }
    if(arr[i]!=0)
    {
        cout<<arr[i]<<"\t";
    }

}
return 0;
}