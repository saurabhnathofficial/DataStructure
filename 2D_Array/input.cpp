#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"enter the input for row & col"<<i<<" "<<j<<" 1";
            cin>>arr[i][j];
        }
        
    }
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < col; l++)
        {
            cout<<arr[k][l]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
