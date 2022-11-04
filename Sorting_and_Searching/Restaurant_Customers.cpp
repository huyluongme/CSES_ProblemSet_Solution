#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<pair<ll,ll>> times;
    for(ll i = 0; i < n; ++i){
        ll s, e; cin >> s >> e;
        times.push_back({s, 1});
        times.push_back({e, -1});
    }
    ll res = 0, tmp = 0;
    sort(times.begin(), times.end());
    for(auto it : times){
        tmp += it.second;
        res = max(res, tmp);
    }
    cout << res;
    return 0;
}
