#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //Deque is Double anded queue it very simmiler to list.
    //we can perform all the operations of list 
    //******Deque internally implementated by dynamic array****** 
    //******Thats by we can perform random access ******
     
    deque<int> dq = {0,1,2,3,4,5};
    cout<<dq[4]<<endl;//random access



    // ******push_back, push_front, pop_back, pop_front size,clear,begin,end,erase,rbegin,rend,insert,front,back******
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;







    // for(int i : dq) {
    //     cout << i << " ";
    // }
    return 0;
}