//6. Write a program to input 2 dimensional arrays A and B , get the size
//(m*n) of the array as an input from the user and then perform addition and 
//multiplication of two matrices(A+B,A*B)
#include<iostream>
using namespace std;
int main()
{
    int m1,n1,m2,n2,m3,n3,n;
    int a[100][100],b[100][100];
    cout<<"Enter the no of rows in 2D array-A\t";
    cin>>m1;
    cout<<"\nEnter the no of columns in 2D array-A\t";
    cin>>n1;
    cout<<"\nEnter the no of rows in 2D array-B\t";
    cin>>m2;
    cout<<"\nEnter the no of columns in 2D array-B\t";
    cin>>n2;
    for(int i=0; i<m1;i++)
    {
        for (int j=0;j<n1;j++)
        {
            cout<<"\nEnter value for ["<<i<<","<<j<<"]th element in A\t";
            cin>>a[i][j];
        }
    }
    cout<<"Values in A are\n";
    for(int i=0;i<m1;i++)
    {
        for (int j=0;j<n1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(int i=0; i<m2;i++)
    {
        for (int j=0;j<n2;j++)
        {
            cout<<"\nEnter value for ["<<i<<","<<j<<"]th element in B\t";
            cin>>b[i][j];
        }
    }
    cout<<"Values in B are\n";
    for(int i=0;i<m2;i++)
    {
        for (int j=0;j<n2;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    } 
    cout<<"\n1.Addition\n2.Multiplication\n"; 
    for(int i=0;i<2;i++)
    {
    cout<<"Enter number for operation to be performed\t";
    cin>>n;
    cout<<"\n";
    switch (n)
    {
        case 1:
        if(m1==m2 && n1==n2)
        {
            m3=m1;
            n3=n1;
            int c[100][100];
           cout<<"Addition of 2D arrays Aand B are\n";
            for (int i=0;i<m3;i++)
            {
                 for (int j=0;j<n3;j++)
                    {
                    c[i][j]=a[i][j]+b[i][j];
                    cout<<c[i][j]<<"\t";
                   }
                cout<<"\n";
            }
            cout<<"Addition is done\n";
        }
        else
        {
            cout<<"Addition is not possible\n";
        }
        break;
        case 2:
        if(m2==n1)
        {
            m3=m1;
            n3=n2;
            int d[100][100];
            cout<<"Multiplication of 2D arrays Aand B are\n";
            for (int i=0;i<m3;i++)
            {
                for (int j=0;j<n3;j++)
                {
                    d[i][j]=0;
                    for (int k=0;k<n3;k++)
                    {
                    int step= a[i][k]*b[k][j];
                    d[i][j]=d[i][j]+step;
                    }
                    cout<<d[i][j]<<"\t";
                }
                cout<<"\n";
            }
           
            cout<<"Multiplication is done\n";
        }
        else
        {
            cout<<"Multiplication is not possible\n";
        }
        break;
    }
    }
    return 0;
}