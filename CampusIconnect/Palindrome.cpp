// A palindrome number is a number that remains the same when its digits are reversed. like 121,11,333

#include<iostream>
using namespace std;

int p(int n)
{
    int s = 0;
    while (n)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }

return s;
    
}
int main()
{
    int a,b,x,y;
    cout<<"Enter two No: ";
    cin>>a>>b;

    x = a > b ? a : b;
    y = a < b ? a : b;

    for (int i = y; i < x; i++)
    {
       if (i == p(i))
       {
        cout<<i<<" ";
       }
       
    }
    
    return 0;
}