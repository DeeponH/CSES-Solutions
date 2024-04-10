#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c;
    int k = 0, ans = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != c) {
            c = s[i];
            k = 0;
        }
        if (s[i] == c) {
            k++;
        }
        ans = max(ans, k);
    }
    cout << ans;
}