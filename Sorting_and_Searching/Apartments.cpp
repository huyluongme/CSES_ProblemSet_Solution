#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, k, res = 0; cin >> n >> m >> k;
    vector<ll> desired(n), apart(m);
    for(int i = 0; i < n; ++i) cin >> desired[i];
    for(int i = 0; i < m; ++i) cin >> apart[i];
    sort(desired.begin(), desired.end());
    sort(apart.begin(), apart.end());
    int i = 0, j = 0;
    while(i < n && j < m){
        if(abs(desired[i] - apart[j]) <= k){
            ++res;
            ++i;
            ++j;
        }
        else if(desired[i] < apart[j]){
            ++i;
        }
        else ++j;
    }
    cout << res;
    return 0;
}
