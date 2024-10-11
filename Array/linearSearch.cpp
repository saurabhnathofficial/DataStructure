#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    int arr[5] = {2,4,1,53,86};
    int target = 3;
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
       if(arr[i] == target){
        //found
        flag = 1;
        break;
       }
    }
    
    if (flag == 1)
    {
        cout<<"Target Found!!";
    }
    else{
        cout<<"Target Not Found!";
    }
    
    return 0;
}