#include <bits/stdc++.h>
using namespace std;

void coin(int a,int b){
    if (max(a,b)>2*min(a,b)){
        cout <<  "NO" << endl;
        return;
    }
    if ((a+b)%3==0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main(){
    int a,b,t;
    cin >> t;
    for (int i=0;i<t;i++){
    cin >> a;
    cin >> b;
    coin(a,b);}
    return 0;
}