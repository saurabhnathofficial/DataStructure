#include<iostream>
#include <list>
using namespace std;

int main()
{
    //List is internally iplementation as a doubly linked list 
    // we can perform special operations on the list is : push_back, pop_front, pop_back and pop_front;
    //list initialsation is same as vector
    list<int> l = {1,2,3,4,5,6} ;

    // -------special operations-----------
    l.push_back(7);
    l.push_front(0);
    l.pop_back();
    l.pop_front();

    // we can also perform operation of vaectors on the list

    // ******size,clear,begin,end,erase,rbegin,rend,insert,front,back ******---

    l.clear();
    

    for(auto i: l){
        cout<<i<<" ";
    }
    return 0;
}