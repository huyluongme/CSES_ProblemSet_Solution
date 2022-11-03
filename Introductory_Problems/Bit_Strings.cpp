#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, res = 2; cin >> n;
    for(ll i = 1; i < n; i++)
        res = (res * 2) % mod;
    cout << res;
    return 0;
}

