#include <iostream>

using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;
    int rem;
    while(decNum > 0){
        rem = decNum%2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main() {
  for(int i = 1; i <= 10; i++){
      cout<<decToBinary(i)<<endl;
  }
  
}