#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll x, y; cin >> x >> y;
        if(x >= y){
            if(x % 2 == 0) cout << x * x - (y - 1) << '\n';
            else cout << (x - 1) * (x - 1) + y << '\n';
        }
        else{
            if(y % 2 == 0) cout << (y - 1) * (y - 1) + x << '\n';
            else cout << y * y - (x - 1) << '\n';
        }
    }
    return 0;
}
