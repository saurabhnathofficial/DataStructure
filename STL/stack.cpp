#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // Stack is last in first out (LIFO);

    // ****Operations : push/emplace, top, pop, size, empty, swap ****

    // Intialisation 

    stack<int>s;
    stack<int>p;
    
    // insertion in stack 
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);

    p.push(22);
    p.push(333);
    p.push(4444);
    p.emplace(55555);
    
    //Deletion in stack 
    s.pop();

    // print last elem of stack 
    cout<<s.top()<<endl;

    // size of stack 
    cout<<s.size()<<endl;

    // waping stacks
    p.swap(s);


    // printng all elements of stack 

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<"\n\n";
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
    return 0;
}