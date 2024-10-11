#include<iostream>
using namespace std;


int getUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2,10,33,33,22,22,2,5};
    int size = sizeof(arr)/sizeof(int);

    int finalAns = getUnique(arr, size);

    cout<<finalAns;
    return 0;
}