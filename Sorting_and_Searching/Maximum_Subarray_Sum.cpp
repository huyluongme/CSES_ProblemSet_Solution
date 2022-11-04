#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; ++i) cin >> arr[i];
    ll res = LLONG_MIN, tmp = 0;
    for(ll i = 0; i < n; ++i){
        if(tmp + arr[i] >= arr[i]) tmp += arr[i];
        else tmp = arr[i];
        res = max(res, tmp);
    }
    cout << res;
    return 0;
}

