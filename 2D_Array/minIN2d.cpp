#include<iostream>
#include <limits.h>

using namespace std;

int minIN2d(int arr[][3],int row ,int col){
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            
        }
        
    }
    return min;
    
}
int main()
{
      int arr[][3] = {
        {10,30,40},
        {23,43,02},
        {32,3,-21221}
    };
    int row = 3;
    int col = 3;

    cout<<minIN2d(arr,row,col);
    return 0;
}