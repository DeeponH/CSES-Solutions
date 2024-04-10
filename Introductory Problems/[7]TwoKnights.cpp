#include <bits/stdc++.h>
using namespace std;
long long count(int i){
    return (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1));
}
int main(){
    int n;
    cin >> n;
    cout << 0 << endl;
    for(long long k=2;k<=n;k++){
        cout << count(k) << endl;
    }
}