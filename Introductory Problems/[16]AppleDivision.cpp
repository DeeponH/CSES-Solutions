#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,t=0,ans=INT_MAX;
    cin >>n;
    long int arr[n];
    for (long long int i=0;i<n;i++){
        cin >> arr[i];
        t=t+arr[i];
    }
    for (long long int i=0;i< (1<<n);i++){
        long long int k=0;
        for(long long int j=0;j<n;j++){
            if(i & 1<<j) k+= arr[j];
        }
        long long int current = abs((t-k)-k);
        ans=min(ans,current);
    }
    cout << ans;
	return 0;
}