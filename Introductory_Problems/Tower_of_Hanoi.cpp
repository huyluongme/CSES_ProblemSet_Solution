#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> steps;

void tower(int n, int l, int m, int r){
    if(n == 1) {
        steps.push_back({l, r});
        return;
    }
    tower(n - 1, l, r, m);
    tower(1, l, m, r);
    tower(n - 1, m, l, r);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    tower(n, 1, 2, 3);
    cout << steps.size() << '\n';
    for(auto it : steps) cout << it.first << ' ' << it.second << '\n';
    return 0;
}
