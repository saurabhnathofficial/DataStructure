#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric> // For gcd

using namespace std;

// Struct to hash pairs for unordered_map
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto h1 = hash<T1>{}(p.first);
        auto h2 = hash<T2>{}(p.second);
        return h1 ^ (h2 << 1); // Combine the hashes
    }
};

// Line structure to represent a line segment
struct Line {
    int x1, y1, x2, y2;

    bool vertical() const { return x1 == x2; }
    bool horizontal() const { return y1 == y2; }
    bool diagonal() const { return abs(x2 - x1) == abs(y2 - y1); }
};

// Calculate Manhattan or diagonal distance
long long calculateDistance(int x1, int y1, int x2, int y2) {
    if (x1 == x2) return abs(y1 - y2);         // Vertical distance
    if (y1 == y2) return abs(x1 - x2);         // Horizontal distance
    if (abs(x1 - x2) == abs(y1 - y2))          // Diagonal distance
        return abs(x1 - x2);
    return 0;                                  // Invalid case
}

// Add line's points to a map
void addLineToMap(const Line& line, int idx, unordered_map<pair<int, int>, vector<int>, hash_pair>& ptsMap) {
    int x1 = line.x1, y1 = line.y1;
    int x2 = line.x2, y2 = line.y2;

    if (line.vertical()) {
        int yStart = min(y1, y2);
        int yEnd = max(y1, y2);
        for (int y = yStart; y <= yEnd; ++y) {
            ptsMap[{x1, y}].push_back(idx);
        }
    } else if (line.horizontal()) {
        int xStart = min(x1, x2);
        int xEnd = max(x1, x2);
        for (int x = xStart; x <= xEnd; ++x) {
            ptsMap[{x, y1}].push_back(idx);
        }
    } else if (line.diagonal()) {
        int steps = abs(x2 - x1);
        int dx = (x2 - x1) / gcd(abs(x2 - x1), abs(y2 - y1));
        int dy = (y2 - y1) / gcd(abs(x2 - x1), abs(y2 - y1));
        for (int i = 0; i <= steps; ++i) {
            ptsMap[{x1 + i * dx, y1 + i * dy}].push_back(idx);
        }
    }
}

// Solve for a specific point
long long solveForPoint(const pair<int, int>& pt, const vector<int>& lst, const vector<Line>& lines) {
    vector<long long> distances;
    for (int lIdx : lst) {
        const Line& ln = lines[lIdx];
        bool oneSided = (pt.first == ln.x1 && pt.second == ln.y1) ||
                        (pt.first == ln.x2 && pt.second == ln.y2);
        if (oneSided) {
            int ex = (pt.first == ln.x1 && pt.second == ln.y1) ? ln.x2 : ln.x1;
            int ey = (pt.first == ln.x1 && pt.second == ln.y1) ? ln.y2 : ln.y1;
            distances.push_back(calculateDistance(pt.first, pt.second, ex, ey));
        } else {
            distances.push_back(calculateDistance(pt.first, pt.second, ln.x1, ln.y1));
            distances.push_back(calculateDistance(pt.first, pt.second, ln.x2, ln.y2));
        }
    }
    return distances.empty() ? 0 : *min_element(distances.begin(), distances.end());
}

// Main solve function
void solve() {
    int N, K;
    cin >> N; // Number of lines
    vector<Line> lines(N);
    unordered_map<pair<int, int>, vector<int>, hash_pair> ptsMap;

    // Read lines
    for (int i = 0; i < N; ++i) {
        cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;
        addLineToMap(lines[i], i, ptsMap);
    }

    cin >> K; // Required frequency of points
    long long total = 0;

    // Iterate through map and compute result
    for (const auto& [pt, lst] : ptsMap) {
        if (lst.size() == K) {
            total += solveForPoint(pt, lst, lines);
        }
    }

    cout << total << '\n';
}

int main() {
    // Enable fast I/O for competitive programming
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Solve the problem
    solve();
    return 0;
}
