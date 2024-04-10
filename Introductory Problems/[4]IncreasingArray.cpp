#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,ans=0;
    cin >> n;
    long long val[n];
    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    for(int i=1;i<n;i++){
        if (val[i]<val[i-1]){
            ans=ans+(val[i-1]-val[i]);
            val[i]=val[i-1];
        }
    }
    cout << ans;
    return 0;
}