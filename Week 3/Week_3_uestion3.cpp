//Selection sort
#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void SelectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
        if (arr[j] < arr[min])
        {
        min = j;
        }
        swap(&arr[min], &arr[i]);
        }
    }
    for (i=0; i < n; i++)
    {
    cout<< arr[i] << "\t";
    }
}
int main()
{
    int arr[] = {3,5,2,7,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Final Sorted array is \t";
    SelectionSort(arr, n);
    return 0;
}