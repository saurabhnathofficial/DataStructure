#include<iostream>
using namespace std;

void extreamPr(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout<<arr[left]<<" ";
        }else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        left++;
        right--;
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
    extreamPr(arr, size);
    return 0;
}