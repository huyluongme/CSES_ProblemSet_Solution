#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string inp; cin >> inp;
    ll max_res = 0, max_tmp = 1;
    for(auto i = 1; i < inp.size(); ++i){
        if(inp[i] != inp[i - 1]){
            max_res = max(max_res, max_tmp);
            max_tmp = 0;
        }
        ++max_tmp;
    }
    max_res = max(max_res, max_tmp);
    cout << max_res;
    return 0;
}
