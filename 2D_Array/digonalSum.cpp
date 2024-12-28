#include <iostream>
using namespace std;

void digonalSum(int arr[][3], int row, int col)
{
    // if the numbers of column and rows are same then we can calculate digonal sum of 2d array
    if (row == col)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
             sum += arr[i][i];
        }
        cout<<sum;
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

    digonalSum(arr, row, col);


    return 0;
}