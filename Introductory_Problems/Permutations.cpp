#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    if(n == 1) cout << 1;
    else if(n < 4) cout << "NO SOLUTION";
    else if (n == 4) cout << "2 4 1 3";
    else{
        for(auto i = 1; i <= n; i+= 2) cout << i << ' ';
        for(auto i = 2; i <= n; i += 2) cout << i << ' ';
    }
    return 0;
}
