#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Queue : First In First Out
    // Operations : push/emplace, pop, front, size, empty, swap
    // Diff in Stack & Queue : top used in stack and front used in queue ;

    // Intialization :
    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // cout<<q.front();
    

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}