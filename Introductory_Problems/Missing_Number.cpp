#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, sum = 0; cin >> n;
    for(auto i = 1; i < n; i++){
        ll x;
        cin >> x;
        sum += x;
    }
    cout << (n + 1) * n / 2 - sum;
    return 0;
}
