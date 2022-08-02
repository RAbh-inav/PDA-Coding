//Linear search
#include <iostream>
using namespace std;
 
int linearsearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 

int main()
{
    int arr[] = { 5,13,8,34,96,1,3,7 };
    int x = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearsearch(arr, n, x);
    if(result == -1)
    {
    cout << "Element is not present in array";
    }
    else
    {
    cout << "Element is present at index " << result;
    }
    return 0;
}