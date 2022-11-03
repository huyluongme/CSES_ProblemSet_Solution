#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, res = 0; cin >> n;
    vector<ll> arr(n);
    for(auto i = 0; i < n; ++i) cin >> arr[i];
    for(auto i = 1; i < n; ++i){
        if(arr[i] < arr[i - 1]){
            res += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << res;
    return 0;
}
