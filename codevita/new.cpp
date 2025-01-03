#include <iostream>
#include <vector>

using namespace std;

bool inBounds(int x, int y, int N) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int checkBands(vector<string>& grid, int N) {
    int overlap = 0;
    bool locked = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '1' || grid[i][j] == '2') {
                char band = grid[i][j];

                if (inBounds(i, j - 1, N) && grid[i][j - 1] != '.' && grid[i][j - 1] != band) {
                    locked = true;
                }
                if (inBounds(i, j + 1, N) && grid[i][j + 1] != '.' && grid[i][j + 1] != band) {
                    locked = true;
                }
                if (inBounds(i - 1, j, N) && grid[i - 1][j] != '.' && grid[i - 1][j] != band) {
                    locked = true;
                }
                if (inBounds(i + 1, j, N) && grid[i + 1][j] != '.' && grid[i + 1][j] != band) {
                    locked = true;
                }

                if (grid[i][j] == '1' && inBounds(i, j, N) && grid[i][j] == '2') {
                    overlap++;
                }
            }
        }
    }

    if (locked) {
        return -1;
    }

    return overlap;
}

int main() {
    int N;
    cin >> N;

    vector<string> grid(N);
    for (int i = 0; i < N; i++) {
        cin >> grid[i];
    }

    int result = checkBands(grid, N);

    if (result == -1) {
        cout << "Impossible" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
