#include<iostream>
using namespace std;


int maxOf2d(int arr[][3],int col, int row){
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
        }
        
    }
    return max;
}
int main()
{
    int arr[][3] = {
        {10,30,40},
        {23,43,02},
        {32,3,21221}
    };
    int row = 3;
    int col = 3;
    cout<<maxOf2d(arr,row,col);
    return 0;
}
