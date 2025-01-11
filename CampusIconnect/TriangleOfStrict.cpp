#include <iostream>

using namespace std;

int main() {
    int i,j,n;
    cin>>n;
    
    
    // loop for star triangle
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    
    
    // loop for num triangle
    for(i=1; i<=n; i++){
        for(j=1; j<i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }

        // loop for char triangle
        
    for(i=1; i<=n; i++){
        char ch = 'a';
        
        for(j=1; j<i+1; j++){
            cout<<ch;
        }
        
        cout<<endl;
    }


}