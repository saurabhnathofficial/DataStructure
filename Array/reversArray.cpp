#include<iostream>
using namespace std;


void reversArray(int arr[],int size){
    int left = 0;
    int right = size - 1;
    
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n";

    reversArray(arr, size);
    
    
    return 0;
}