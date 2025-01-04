#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // ***** Iterators was used for achieving the specific postion and that postions value
    vector<int> p = {2, 3, 4, 5, 6};

    // --Initialisation of iterator
    // forward iterator
    vector<int>::iterator it;
    for (it = p.begin(); it != p.end(); it++)
    {
        cout << *(it) << endl;
    }

    cout<<"the reverse iterator used : "<<endl;
    vector<int>::reverse_iterator rit;
    for (rit = p.rbegin(); rit != p.rend(); rit++)
    {
        cout << *(rit) << endl;
    }
   
//    using in modern cpp forward it
    for(auto it = p.begin(); it != p.end(); it++){
        cout<<*(it)<<" ";
    }
   
//    using in modern cpp backward it
    for(auto rit = p.rbegin(); rit != p.rend(); rit++){
        cout<<*(rit)<<" ";
    }
    return 0;
}