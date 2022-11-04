#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x, res = 0; cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll i = 0, j = n - 1;
    while (i <= j) {
        if (i == j) { ++res; break; }
        else if (arr[i] + arr[j] <= x) { ++i; --j; ++res; }
        else {
            if (arr[j] <= x) { --j; ++res; }
        }
    }
    cout << res;
    return 0;
}
