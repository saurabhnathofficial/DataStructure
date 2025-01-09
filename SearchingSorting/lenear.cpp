#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int target;
    cout<<"Enter Target ";
    cin>>target;
    vector<int>p = {12,32,12,12,32,546,32,6243,134,132};
    for (int i = 0; i < p.size(); i++)
    {
    int flag = 1;

        if (target == p[i])
        {
            cout<<"Target found";
            flag = 0;
            break;
        }        
    }
    
    return 0;
}