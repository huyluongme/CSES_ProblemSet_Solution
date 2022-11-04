#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, res = 0, cnt_cant = 0; cin >> n >> m;
    multiset<ll> tickets;
    for (int i = 0; i < n; ++i) {
        ll x; cin >> x;
        tickets.insert(x);
    }
    for (int i = 0; i < m; i++) {
        ll p; cin >> p;
        auto it = tickets.upper_bound(p);
        if (it == tickets.begin()) cout << "-1\n";
        else {
            cout << *(--it) << '\n';
            tickets.erase(it);
        }
    }
    return 0;
}
