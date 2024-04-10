#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if (n==1){
        cout << n;
        exit(0);
    }
    if (n<=3) cout << "NO SOLUTION";
    else{
        if(n%2==0){
            for (int i = n - 1; i > 0;i=i-2)
                cout << i << " ";
            for (int i = n; i >= 2; i=i-2)
                cout << i << " ";
        }
        else {
            for (int i = n - 2; i > 0;i=i-2)
                cout << i << " ";
            for (int i = n - 1; i > 0; i=i-2)
                cout << i << " ";
            cout << n << "";
        }
    }
    return 0;
    
}