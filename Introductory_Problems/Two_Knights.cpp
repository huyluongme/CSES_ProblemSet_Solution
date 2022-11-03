#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    cout << "0\n";
    for(ll i = 2; i <= n; ++i)
        cout << ((i * i) * (i * i - 1) / 2) - (4 * (i - 1) * (i - 2)) << '\n';
    return 0;
}
