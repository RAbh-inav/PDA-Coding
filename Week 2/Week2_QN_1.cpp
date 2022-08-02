//1.  Write a program to input an one-dimensional array, get the size of the array
//as an input from the user and perform the following operations:
//● Get an element ‘x’ as an input form the user
//● Search for the element ‘x’ in the array, if found successfully print
//“The element ‘x’ has been found”’ else print “ Not found”
//● Get an element ‘y’ and ‘z’, as inputs from the user, insert the element
//‘y’ at the position ‘z’.
//● Get an element ‘d’ as an input from the user, then delete the particular
//element in the array.

#include<iostream>
using namespace std;
int main(){
int size,count;
int arr[100];
int temp=0,temp1=0;
cout<<"Enter array size\n";
cin>>size;
for(int i=0;i<size;i++)
{
cout<<"Enter"<<i<<"th element\n";
cin>>arr[i];
}
cout<<"Original array is\n";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<"\t";
}
cout<<"\n";
int x;
bool search=false;
cout<<"Enter number to be searched\n";
cin>>x;
for(int i=0;i<size;i++)
{
    if(arr[i]==x)
    {
        search=true;
        break;
    }
}
if(search)
{
    cout<<"The element "<<x<<" has been found \n";
}
else
{
    cout<<"Not found\n";
}
int y,z;
cout<<"Enter number to be inserted\n";
cin>>y;
cout<<"Enter position to be inserted\n";
cin>>z;
for(int i=size;i>=z;i--)
{
    arr[i]=arr[i-1];
    
}
arr[z]=y;
cout<<"Array after number has been inserted is\n";
for(int i=0;i<size+1;i++)
{
    cout<<arr[i]<<"\t";
}
cout<<"\n";
int d;
cout<<"Enter value to be deleted";
cin>>d;
for (int i=0; i<size+1 ;i++)
{
    if(arr[i]==d)
    {
        count++;
    }
}
for (int i=0; i<size+1 ;i++)
{
    
   if(arr[i]==d)
    {
        
        for(int j=i; j<size; j++)
        {
            arr[j]=arr[j+1];
           
        }         
     }
}
cout<<"Array after number has been deleted is\n";
for(int i=0; i<size+1-count; i++)
{
    cout<<arr[i]<<"\t";
}
cout<<"\n";
return 0;
}