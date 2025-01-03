#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

#define loop(i, a, n) for (long long i = (a); i < (n); ++i) 
#define all(c) (c).begin(), (c).end() 
#define sz(a) ((long long)a.size()) 
#define pb push_back
#define fi first
#define si second

typedef long long lli;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<lli, lli> pll;
typedef unordered_map<int, int> umpi;  // Unordered map for fast lookups
typedef map<int, int> mpi;

// Line structure to store line coordinates and determine types
struct Line {
    int x1, y1, x2, y2;
    bool vertical() const { return x1 == x2; }
    bool horizontal() const { return y1 == y2; }
    bool diagonal() const { return abs(x2 - x1) == abs(y2 - y1); }
};

// Function to calculate the distance between two points
lli calculateDistance(int x1, int y1, int x2, int y2) {
    if (x1 == x2) return abs(y1 - y2);
    if (y1 == y2) return abs(x1 - x2);
    if (abs(x1 - x2) == abs(y1 - y2)) return abs(x1 - x2);
    return 0;
}

// Add line information to points map
void addLineToMap(const Line& line, int idx, map<pair<int, int>, vector<int>>& ptsMap) {
    int x1 = line.x1, y1 = line.y1;
    int x2 = line.x2, y2 = line.y2;

    if (line.vertical()) {
        int yStart = min(y1, y2);
        int yEnd = max(y1, y2);
        for (int y = yStart; y <= yEnd; y++) {
            ptsMap[{x1, y}].push_back(idx);
        }
    }
    else if (line.horizontal()) {
        int xStart = min(x1, x2);
        int xEnd = max(x1, x2);
        for (int x = xStart; x <= xEnd; x++) {
            ptsMap[{x, y1}].push_back(idx);
        }
    }
    else if (line.diagonal()) {
        int steps = abs(x2 - x1);
        int dx = (x2 - x1) / steps;
        int dy = (y2 - y1) / steps;
        for (int i = 0; i <= steps; i++) {
            int x = x1 + i * dx;
            int y = y1 + i * dy;
            ptsMap[{x, y}].push_back(idx);
        }
    }
}

// Function to solve for a point based on the lines
lli solveForPoint(const pair<int, int>& pt, const vector<int>& lst, const vector<Line>& lines) {
    vector<lli> d;
    for (auto lIdx : lst) {
        const Line& ln = lines[lIdx];
        bool oneSided = (pt.first == ln.x1 && pt.second == ln.y1) ||
                        (pt.first == ln.x2 && pt.second == ln.y2);
        if (oneSided) {
            int ex = (pt.first == ln.x1 && pt.second == ln.y1) ? ln.x2 : ln.x1;
            int ey = (pt.first == ln.x1 && pt.second == ln.y1) ? ln.y2 : ln.y1;
            d.push_back(calculateDistance(pt.first, pt.second, ex, ey));
        }
        else {
            d.push_back(calculateDistance(pt.first, pt.second, ln.x1, ln.y1));
            d.push_back(calculateDistance(pt.first, pt.second, ln.x2, ln.y2));
        }
    }
    return d.empty() ? 0 : *min_element(d.begin(), d.end());
}

// Main function to solve the problem
void solve() {
    int N, K;
    cin >> N;  // Read number of lines
    vector<Line> lines(N);
    map<pair<int, int>, vector<int>> ptsMap;

    // Reading the lines and adding to the map
    for (int i = 0; i < N; i++) {
        cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;
        addLineToMap(lines[i], i, ptsMap);
    }

    cin >> K;  // Read the required K value

    lli total = 0;
    // Iterate through points and solve
    for (auto &[pt, lst] : ptsMap) {  
        if (sz(lst) == K) {
            total += solveForPoint(pt, lst, lines);
        }
    }

    cout << total;  // Output the result
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();  // Start solving the problem
    return 0;
}