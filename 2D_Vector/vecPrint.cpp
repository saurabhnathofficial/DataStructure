#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4, vector<int>(5, 10));
    vector<vector<int>> arr1(4, vector<int>(8, 1));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    
        return 0;
}