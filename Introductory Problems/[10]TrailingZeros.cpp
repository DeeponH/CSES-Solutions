#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, curr = 5, ans = 0;
    cin >> n;
    while (curr <= n) {
        ans += n / curr;
        curr *= 5;
    }
    cout << ans << endl;
    return 0;
}