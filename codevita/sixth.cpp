#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

struct Card {
    int x, y, z;
    string plane;
    set<pair<pair<int, int>, int>> points;

    Card(int _x, int _y, int _z, string _plane) : x(_x), y(_y), z(_z), plane(_plane) {
        if (plane == "xy") {
            points.insert({{x, y}, z});
            points.insert({{x + 1, y}, z});
            points.insert({{x + 1, y + 1}, z});
            points.insert({{x, y + 1}, z});
        } else if (plane == "yz") {
            points.insert({{x, y}, z});
            points.insert({{x, y + 1}, z});
            points.insert({{x, y + 1}, z + 1});
            points.insert({{x, y}, z + 1});
        } else if (plane == "xz") {
            points.insert({{x, y}, z});
            points.insert({{x + 1, y}, z});
            points.insert({{x + 1, y}, z + 1});
            points.insert({{x, y}, z + 1});
        }
    }
};

bool isPointCovered(const vector<Card>& cards, int x, int y, int z) {
    for (const Card& card : cards) {
        if (card.points.count({{x, y}, z})) {
            return true;
        }
    }
    return false;
}

bool isValidBox(const vector<Card>& cards, int& minX, int& maxX, int& minY, int& maxY, int& minZ, int& maxZ) {
    // Find the extents of the box
    for (const Card& card : cards) {
        for (const auto& point : card.points) {
            minX = min(minX, point.first.first);
            maxX = max(maxX, point.first.first);
            minY = min(minY, point.first.second);
            maxY = max(maxY, point.first.second);
            minZ = min(minZ, point.second);
            maxZ = max(maxZ, point.second);
        }
    }

    int missingCount = 0;
    pair<int, int, int> missing;
    string missingPlane;

    // Check the edges of the box
    for (int z = minZ; z <= maxZ; z++) {
        for (int y = minY; y <= maxY; y++) {
            if (!isPointCovered(cards, minX, y, z)) {
                missingCount++;
                missing = {minX, y, z};
                missingPlane = "yz";
            }
            if (!isPointCovered(cards, maxX, y, z)) {
                missingCount++;
                missing = {maxX - 1, y, z};
                missingPlane = "yz";
            }
        }
    }

    for (int z = minZ; z <= maxZ; z++) {
        for (int x = minX; x <= maxX; x++) {
            if (!isPointCovered(cards, x, minY, z)) {
                missingCount++;
                missing = {x, minY, z};
                missingPlane = "xz";
            }
            if (!isPointCovered(cards, x, maxY, z)) {
                missingCount++;
                missing = {x, maxY - 1, z};
                missingPlane = "xz";
            }
        }
    }

    for (int y = minY; y <= maxY; y++) {
        for (int x = minX; x <= maxX; x++) {
            if (!isPointCovered(cards, x, y, minZ)) {
                missingCount++;
                missing = {x, y, minZ};
                missingPlane = "xy";
            }
            if (!isPointCovered(cards, x, y, maxZ)) {
                missingCount++;
                missing = {x, y, maxZ - 1};
                missingPlane = "xy";
            }
        }
    }

    if (missingCount == 0) {
        cout << (maxX - minX) * (maxY - minY) * (maxZ - minZ) << endl;
        return true;
    } else if (missingCount == 4) {
        cout << missing.first << " " << missing.second << " " << missing.third << " " << missingPlane << endl;
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<Card> cards;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        string plane;
        cin >> x >> y >> z >> plane;
        cards.emplace_back(x, y, z, plane);
    }

    int minX = INT_MAX, maxX = INT_MIN;
    int minY = INT_MAX, maxY = INT_MIN;
    int minZ = INT_MAX, maxZ = INT_MIN;

    // Call the function to validate the box and print the result
    if (!isValidBox(cards, minX, maxX, minY, maxY, minZ, maxZ)) {
        cout << "Box is not valid" << endl;
    }

    return 0;
}

