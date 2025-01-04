#include<iostream>
#include<set>
using namespace std;

int main()
{
    // Set :
    // set is verry simmiler to map 
    // set stored only unique values 
    // set will stored values in sorted order 
    
    // Initialzation :
        set<int>s = {0,1,2,3,4,5,6,7};
        s.insert(2);
        s.insert(2);
        s.insert(4);
        s.insert(4);
        s.insert(6);
        s.insert(6);

    // Operations :
        cout<<"lower_bound : "<<*(s.lower_bound(4))<<endl;
        cout<<"upper_bound : "<<*(s.upper_bound(4))<<endl;
        
        // commmon op : insert/emplace, count, erase, find, size, empty



    // Types of Set : 
        //  1> Set : values are unique
        //  2> Mult Set : values are not unique but in unique order 
        //  1> Unordered Set : values are unique but in unorderd
        
        // for(auto p:s){
        //     cout<<p<<endl;
        // }


    return 0;
}