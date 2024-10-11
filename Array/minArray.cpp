#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    //-2 to the power 31
    // cout<<INT_MIN<<endl;
    //3 to the power 31
    // cout<<INT_MAX;

 
    int arr[] = {4,6,8,576,3,- 23,9};
    int size = sizeof(arr)/sizeof(int);
    
    int minArr = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minArr)
        {
            minArr = arr[i];
        }
        
    }
    cout<<"The Minimum no of array is : "<<minArr;

    return 0;
}