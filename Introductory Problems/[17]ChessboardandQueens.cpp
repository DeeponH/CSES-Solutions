#include <bits/stdc++.h>
using namespace std;

int ans=0;
bool takencols[8],takendiag1[16],takendiag2[16];


void places(string board[8],int r, int & ans){
    if (r == 8)
    {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++)
    {
        if (board[r][c] == '.')
        {
            if (!takencols[c] && !takendiag1[r - c + 8 - 1] && !takendiag2[r + c])
            {
                takencols[c] = takendiag1[r - c + 8 - 1] = takendiag2[r + c] = true;
                places(board, r + 1, ans);
                takencols[c] = takendiag1[r - c + 8 - 1] = takendiag2[r + c] = false;
            }
        }
    }
}

int main(){
    string s;
    string board[8];
    for(int i=0;i<8;i++){
        cin >> board[i];
    }
    places(board,0,ans);
    cout << ans;
    return 0;
}