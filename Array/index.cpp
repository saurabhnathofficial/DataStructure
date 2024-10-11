#include<iostream>
using namespace std;

int main()
{
    cout<<"wellcome to the array \n";

    // Taking input in array

    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value for index "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    //Double the array

    for (int i = 0; i < n; i++)
    {
        cout<<2 * arr[i]<<" ";
    }
    
    return 0;
}