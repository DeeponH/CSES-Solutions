#include <bits/stdc++.h>
using namespace std;

void toh(int a,int b,int c,int n){
    if(n==0) return;
    toh(a,c,b,n-1);
    cout<<a<<" "<<c<<endl;
    toh(b,a,c,n-1);
}
int main(){
    int n;
    cin >> n;
    cout << (pow(2,n)-1) <<endl;
    toh(1,2,3,n);
    return 0;
}

