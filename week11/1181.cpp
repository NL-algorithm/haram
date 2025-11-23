#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    string prev = "";
    for (int i = 0; i < n; i++) {
        if (words[i] != prev) {
            cout << words[i] << "\n";
            prev = words[i];
        }
    }
    
    return 0;
}

