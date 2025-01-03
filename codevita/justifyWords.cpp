#include <iostream>
#include <vector>
#include <string>
using namespace std;

int arrange(int t, vector<string> &arr, int x, int y) {
   int cnt = 0;
   int len = 0;
   int rows = 1;

   for (const string &s : arr) {
       int sz = s.length();
       
       if (sz > y) {
           continue;
       }

       if (len + sz + (len > 0 ? 1 : 0) <= y) {
           if (len > 0) {
               len += 1;
           }
           len += sz;
           cnt++;
       } else {
           if (rows >= x) {
               break;
           }
           rows++;
           len = sz;
           cnt++;
       }
   }

   return cnt;
}

int main() {
   int t;
   cin >> t;

   vector<string> arr(t);
   for (int i = 0; i < t; ++i) {
       cin >> arr[i];
   }

   int x, y;
   cin >> x >> y;

   cout << arrange(t, arr, x, y) << endl;

   return 0;
}