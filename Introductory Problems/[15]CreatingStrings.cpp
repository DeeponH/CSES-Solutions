#include <bits/stdc++.h>
using namespace std;

set<string> perm;
void permutations (string prefix,string suffix){
    if (suffix.length()==0){
        perm.insert(prefix);
        return;
    }
    for(int i=0;i<suffix.length();i++){
        permutations(prefix+suffix[i],suffix.substr(0, i) + suffix.substr(i + 1));
    }
}

int main(){
    string s;
    cin >> s;
    permutations("", s);
    cout << perm.size() << endl;
    for (auto ele : perm)
    {
        cout << ele << endl;
    }
    return 0;
}