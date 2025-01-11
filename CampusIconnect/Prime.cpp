#include <iostream>
using namespace std;

int Prime(int n) {
    int s = 0;

    for (int i = 2; i < n/2; i++) {
        if (n%i == 0) {
            s += i;
        }if(s == n){
            return 0;
        }else{
            return 1;
        }

    }
}
int main() {
    int n;
    cin >> n;
    Prime(n);

}