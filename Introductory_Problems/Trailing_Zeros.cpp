#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, res = 0; cin >> n;
    ll i = 5;
    while(n / i >= 1){
        res += n / i;
        i *= 5;
    }
    cout << res;
    return 0;
}
