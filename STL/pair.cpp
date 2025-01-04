#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //Pair is part of utility library
    //pair is used for storing two values or object or pair of values
    //pair can be store two different types of values
    //pair<int, float> p(10, 2.5); There are two values one for int and one for float


    // Initialisation 
    // pair<int,int>p ={10,32};
    // pair<int,float>q = {23,2.3}; 
    // cout<<p.first<<" "<<p.second<<endl;
    // cout<<q.first<<" "<<q.second<<endl;

    //**** we can also make pair of pair**** 

    // pair<int, pair<int,int>> pr = {3,{99,88}};
    // cout<<pr.first<<endl;
    // cout<<pr.second.first<<" "<<pr.second.second;

    // **** We can also make vector of pairs ****

    vector<pair<int,int>>vec = {{2,3},{4,5},{6,7}};
    // cout<<vec.size()<<endl;
    
    // cout<<vec.front().first;
    // cout<<vec.front().second;
    // cout<<endl;

    // ****printig value of specific positions**** 
 
    // cout<<vec.at(2).first;
    // cout<<vec.at(2).second;
    
    // **** If we want to insert pair in vector ****

    vec.push_back({1,1}); // push_back assume that the object is created by you
    vec.emplace_back(2,2); // in-place objects creat at the time of insertion (we don't want to use curly brasis {})


    // ** printing all pair **
    for(pair<int, int> p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }









    return 0;
}