//Binary search
#include<iostream>
 
using namespace std;
 
  
int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
        return mid;
        }
        else if (arr[mid] < x)
        {
        left = mid + 1;
        }
        else
        {
        right = mid - 1;
        }
    }
    return -1;
}
 
int main(){
    int arr[] = {1,5,7,19,27,45,57};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    int answer = binarySearch(arr, 0,size-1, x);
    if(answer == -1)
    {
    cout << "Element not found";
    }
    else
    {
    cout << "Element found at position " << answer;
    }
}