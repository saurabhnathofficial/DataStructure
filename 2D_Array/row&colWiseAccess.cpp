#include<iostream>
using namespace std;

void printArrRowWise(int arr[][3],int r,int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
void printArrColWise(int arr[][3],int r, int c){
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    printArrRowWise(arr,3,3);
    printArrColWise(arr,3,3);
    return 0;
}