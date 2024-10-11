#include<iostream>
using namespace std;


void threeNoPairPrint(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            
        }
        
    }
    
}
int main()
{
    int arr[] = {10,20,30};
    int size = 3;

    threeNoPairPrint(arr,size);
    return 0;
}