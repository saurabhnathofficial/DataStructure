#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{   
    // Map :
        // Map is used to stor the key and value (key,value) 
        // there key is always unique
        // values can be duplicated
        // by default sort data in the asc order

    // Initialzation :
        map<string,int>m = {{"gourabh",100},{"sumit",90},{"gourik",80}};
        
    //Insertion : 
        m["chaman"] = 59;
        m["chaman"] = 9;
        m["sumlan"] = 32;
        m["chimakandi"] = 321;

    //Operations : 
        // insert/emplace , count, erase, find, size, empty, 

        // cout<<m.count("chaman");
        // m.erase("chaman");
        // cout<<m.find("sumit");

        // if(m.find("sucvmit") != m.end()){
        //     cout<<"found"<<endl;
        // }else{
        //     cout<<"Not found"<<endl;
        // }

    //Types of Map :

        // 1> map : key is unique & sorted in asc order (abc)
        // 2> multimap : key is not unique but in sorted order
        // 3> unordered_map : key is unique but unordered 

    // 2> Multimap : {log n}
        multimap<char,int>mp = {{'t',1},{'t',2},{'t',6}};
        // o/p : t t t ;

    // 3> Unordered_map : {o(n)}
        unordered_map<char, int>um = {{'z',1},{'a',2},{'t',6}};






        for(auto p : um){
            cout<<p.first<<" "<<p.second<<endl;
            // cout<<p.first<<endl;
        }
    return 0;
}