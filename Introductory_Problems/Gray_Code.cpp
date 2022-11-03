#include <bits/stdc++.h>
using namespace std;

bool valueOf(int num, int pos){
    return (num & (1 << pos)) != 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 0; i < (1 << n); ++i){
        cout << valueOf(i, n - 1);
        for(int p = n - 2; p >= 0; --p) cout << (valueOf(i, p) ^ valueOf(i, p + 1));
        cout << '\n';
    }
    return 0;
}
