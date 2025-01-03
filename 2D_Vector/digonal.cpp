#include<iostream>
#include<vector>
using namespace std;

void digonal(){

}

int main()
{
    // vector<vector <int> >arr(5, vector<int>(8,0));
    vector<vector <int> > arr ={
        {2,4,8,10},
        {12,14,18,110},
        {22,24,28,210},
        {32,34,38,310}
    };
    for (int i = 0; i < arr.size(); i++)
    {
        // for (int j = 0; j < arr[i].size(); j++)
        // {
            cout<<arr[i][i]<< " ";
        // }
        cout<<endl;
        
    }
    
    return 0;
}