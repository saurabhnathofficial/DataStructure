#include<iostream>
using namespace std;

void printArr(int arr[][3],int r, int c)
{
    for (int i = 0; i < r; i++) //loop for row
    {
        for (int j = 0; j < c; j++) //loop for col
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
 
int main()
{
   int arr[3][3] = {
    {1,3,4},
    {2,3,1},
    {7,8,9}
   };

    int r = 3;
    int c = 3;
    printArr(arr,r,c);
    return 0;
}