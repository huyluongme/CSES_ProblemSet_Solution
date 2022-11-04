#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x; cin >> n >> x;
    vector<pair<ll, ll>> arr;
    for(ll i = 0; i < n; ++i){
        ll a; cin >> a;
        arr.push_back({a, i + 1});
    }
    sort(arr.begin(), arr.end());
    ll i = 0, j = n - 1, id_1 = -1, id_2 = -1;
    while(i < j){
        if(arr[i].first + arr[j].first == x){
            id_1 = min(arr[i].second, arr[j].second);
            id_2 = max(arr[i].second, arr[j].second);
            break;
        }
        else if(arr[i].first + arr[j].first > x) --j;
        else ++i;
    }
    if(id_1 == -1 && id_2 == -1) cout << "IMPOSSIBLE";
    else cout << id_1 << ' ' << id_2;
    return 0;
}
