#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    if(sum % 2 == 0){
        cout << "YES\n";
        vector<ll> a, b;
        if(n % 2 == 0){
            ll pair_div = n / 2;
            for(ll i = 1; i <= pair_div / 2; ++i){
                    a.push_back(i);
                    a.push_back(n + 1  - i);
            }
            for(ll i = pair_div / 2 + 1; i <= pair_div; ++i){
                b.push_back(i);
                b.push_back(n + 1 - i);
            }
        }
        else{
            ll pair_div = (n - 1) / 2 + 1;
            for(ll i = 1; i <= pair_div / 2; ++i){
                    a.push_back(i);
                    a.push_back(n  - i);
            }
            for(ll i = pair_div / 2 + 1; i < pair_div; ++i){
                b.push_back(i);
                b.push_back(n - i);
            }
            b.push_back(n);
        }
        cout << a.size() << '\n';
        for(auto i : a) cout << i << ' ';
        cout << '\n';
        cout << b.size() << '\n';
        for(auto i : b) cout << i << ' ';
    }
    else cout << "NO";
    return 0;
}

