#include <iostream>
using namespace std;

void digonalSum(int arr[][3], int row, int col)
{
    // **** printing top-left to bottom-right ****

    cout << "digonal T-L to B-R \n";

    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i] << " \n";
    }

    // o/p =  10 50 90
}

void digonalTR_BL(int arr[][3], int row, int col)
{

    // **** printing top-right to bottom-left ****

    cout << "digonal T-R to B-L \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (i + j == 2)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    // o/p = 30 50 70
}

void digonlaBR_TL(int arr[][3], int row, int col)
{

    // **** printing bottom-right to top-left  ****

    cout << "digonal B-R to T-L \n";

    for (int i = row - 1; i >= 0; i--)
    {
        cout << arr[i][i];
    }

    // o/p = 90 50 10
}

void digonlaBL_TR(int arr[][3], int row, int col)
{
    // // **** print bottom-left to top-right ****

    cout << "printing B-L to T-R" << endl;
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == 2)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    // o/p = 70 50 30
}

void transposeMat(int arr[][3], int row, int col)
{

    // Transpose of a matrics row to column and column to row

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // pricaution : if want to perform digonal operation on 2d array, the Number of columns and the Number of row should be same

    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int row = 3;
    int col = 3;

    // digonalSum(arr, row, col);
    // digonalTR_BL(arr, row, col);
    // digonlaBR_TL(arr, row, col);
    // digonlaBL_TR(arr, row, col);
    transposeMat(arr, row, col);

    return 0;
}
