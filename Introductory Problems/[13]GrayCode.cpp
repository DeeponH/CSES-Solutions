#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> gc;
    gc.push_back("");
    for (int i = 0; i < n; i++) {
        int s = gc.size();
        for (int j = s - 1; j >= 0; j--) {
            gc.push_back(gc[j]);
        }
        s *= 2;
        for (int j = 0; j < s; j++) {
            if (j < gc.size() / 2) {
                gc[j] += "0";
            } else {
                gc[j] += "1";
            }
        }
    }
    for (int i = 0; i < gc.size(); i++) {
        cout << gc[i] << endl;
    }
}