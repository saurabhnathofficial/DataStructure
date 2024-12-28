#include <iostream>
using namespace std;
void colwiseSum(int arr[][3],int row,int col){
    for (int i = 0; i < col; i++)
    {
         int sum = 0;
        for (int j  = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    
}
int main()
{
    int arr[][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int row = 3;
    int col = 3;

    colwiseSum(arr,row,col);
    return 0;
}