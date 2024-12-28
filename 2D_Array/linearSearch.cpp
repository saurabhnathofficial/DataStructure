#include<iostream>
using namespace std;

bool linearSearch(int arr[][3],int row, int col,int target){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target){
                return true;
            }
        }
        
    }
      return false;
    
}
int main()
{
    int arr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int row = 3;
    int col = 3;

    int target;
    cout<<"enter Target: ";
    cin>>target;
    cout<<"target found or Not :" <<linearSearch(arr,row,col,target);
    

    return 0;
}