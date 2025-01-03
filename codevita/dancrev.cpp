#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

const int info = INT_MAX;
const int n_tile = 4; 

int minMovesToFollowInstructions(int N, const vector<int>& instructions) {
    
    int c_dp[n_tile][n_tile];
    int n_dp[n_tile][n_tile];

   
    for (int i = 0; i < n_tile; ++i) {
        for (int j = 0; j < n_tile; ++j) {
            c_dp[i][j] = info;
            n_dp[i][j] = 0;
        }
    }

  
    for (int i = N - 1; i >= 0; --i) {
        int nextTile = instructions[i];

    
        for (int left = 0; left < n_tile; ++left) {
            for (int right = 0; right < n_tile; ++right) {
                c_dp[left][right] = info;
            }
        }

        for (int left = 0; left < n_tile; ++left) {
            for (int right = 0; right < n_tile; ++right) {
                if (n_dp[left][right] == info) continue;

               
                if (right != nextTile) {
                    c_dp[nextTile][right] = min(c_dp[nextTile][right],
                                                  n_dp[left][right] + (left != nextTile ? 1 : 0));
                }

            
                if (left != nextTile) {
                    c_dp[left][nextTile] = min(c_dp[left][nextTile],
                                                 n_dp[left][right] + (right != nextTile ? 1 : 0));
                }
            }
        }

       
        for (int left = 0; left < n_tile; ++left) {
            for (int right = 0; right < n_tile; ++right) {
                n_dp[left][right] = c_dp[left][right];
            }
        }
    }

    
    int minMoves = info;
    for (int left = 0; left < n_tile; ++left) {
        for (int right = 0; right < n_tile; ++right) {
            minMoves = min(minMoves, n_dp[left][right]);
        }
    }

    return minMoves;
}

int main() {
  
    int N;
    cin >> N;

    vector<string> tileNames = {"up", "down", "left", "right"};
    vector<int> instructions(N);

    for (int i = 0; i < N; ++i) {
        string instruction;
        cin >> instruction;
        for (int j = 0; j < n_tile; ++j) {
            if (instruction == tileNames[j]) {
                instructions[i] = j;
                break;
            }
        }
    }

   
    cout << minMovesToFollowInstructions(N, instructions) << endl;

    return 0;
}
