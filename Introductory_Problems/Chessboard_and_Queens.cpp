#include <bits/stdc++.h>
using namespace std;

vector<bool> left_diagonal(30, false);
vector<bool> right_diagonal(30, false);
vector<bool> placed_col(30, false);
vector<vector<bool>> placed(8, vector<bool>(8));
char chessboard[8][8];
int res = 0;

void solve(int cur_col){
    if(cur_col == 8){
        ++res;
        return;
    }
    for(int row = 0; row < 8; ++row){
        if(chessboard[row][cur_col] == '.' && !left_diagonal[row - cur_col + 7]
           && !right_diagonal[row + cur_col] && !placed_col[row]){
            placed[row][cur_col] = true;
            left_diagonal[row - cur_col + 7] = right_diagonal[row + cur_col] = placed_col[row] = true;
            solve(cur_col + 1);
            placed[row][cur_col] = false;
            left_diagonal[row - cur_col + 7] = right_diagonal[row + cur_col] = placed_col[row] = false;
           }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cin >> chessboard[i][j];
        }
    }
    solve(0);
    cout << res;
    return 0;
}
