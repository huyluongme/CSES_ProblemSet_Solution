#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a[26];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string inp; cin >> inp;
    ll s = inp.size();
    for(ll i = 0; i < s; ++i) ++a[inp[i] - 'A'];
    int cnt = 0;
    for(auto i : a) if(i % 2 != 0) ++ cnt;
    if(cnt > 1){cout << "NO SOLUTION"; return 0;}
    for(ll i = 0; i < 26; ++i){
        if(a[i] % 2 == 0){
            ll cnt = a[i] / 2;
            while(cnt--)
                cout << (char)('A' + i);
        }
    }

    for(ll i = 0; i < 26; ++i){
        if(a[i] % 2 != 0){
            ll cnt = a[i];
            while(cnt--) cout << (char)('A' + i);
        }
    }

    for(ll i = 25; i >= 0; --i){
        if(a[i] % 2 == 0){
            ll cnt = a[i] / 2;
            while(cnt--)
                cout << (char)('A' + i);
        }
    }
    return 0;
}
