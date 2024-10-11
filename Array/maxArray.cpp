#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int maxArr = INT_MIN;
    // cout<<maxArr;
    int arr[] = {54,68,556,8,7,45,-85};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxArr)
        {
            maxArr = arr[i];
        }

    }
    cout<<"The maximum no of an array is : "<<maxArr;
    
    return 0;
}