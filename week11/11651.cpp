#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    
    for (int i = 0; i < n; i++) {
        cout << points[i].first << " " << points[i].second << "\n";
    }
    
    return 0;
}

