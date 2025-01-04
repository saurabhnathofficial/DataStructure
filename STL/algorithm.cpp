#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comprator(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}
int main()
{
    >Sorting : 
        >sort(arr,arr+n); // Asnc order
        >sort(arr,arr+n,greater<int>()); // Dsnc order
        >sort(vec.begin(),vec.end()); // for vector asnc order
        >sort(vec.begin(),vec.end(),greater<int>()); //for vector dsnc order

    // int arr[7] = {31,2233,323,456,5,6,2332};
    // sort(arr, arr+7);


    // vector<pair<int, int>> vec = {{9,2},{3,2}, {1,1}, {4,3}};

    // sort(vec.begin(),vec.end(),comprator);

    // for(auto i:vec){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    >Reverse : 
        reverse(v.begin(),v.end());

    >Next Permutation:
        next_permutation(v.begin(),v.end());

    >Swap

    >Min & Max :
        max_element(v.begin(),v.end());
        min_element(v.begin(),v.end());

    >Binary Search :
        binary_search(v.begin(),v.end());

    >Count Set Bits :
        _builtin_popcount(n);

         
        
    return 0;
}