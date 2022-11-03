#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, id, res = LLONG_MAX, total = 0; cin >> n;
    vector<ll> arr(n), tmp(n, 0);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    do{
        ll tmp_total = 0;
        for(ll i = 0; i < n; ++i){
            if(tmp[i] == 1) tmp_total += arr[i];
        }
        res = min(res, abs((total - tmp_total) - tmp_total));
        id = n - 1;
        while(id >= 0 && tmp[id] == 1) --id;
        if(id >= 0){
            tmp[id] = 1;
            for(ll i = id + 1; i < n; ++i) tmp[i] = 0;
        }
        bool check = true;
        for(auto i : tmp) if (i == 0) {check = false; break;}
        if(check) break;
    }while(id >= 0);
    cout << res;
    return 0;
}
