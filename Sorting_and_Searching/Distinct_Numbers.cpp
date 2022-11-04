#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXN = 1e9;
vector<bool> arr(MAXN, false);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, res = 0; cin >> n;
    for (ll i = 0; i < n; ++i) {
        ll x; cin >> x;
        if (!arr[x]) {
            arr[x] = true;
            res++;
        }
    }
    cout << res;
    return 0;
}
