#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string inp; cin >> inp;
    sort(inp.begin(), inp.end());
    vector<string> per;
    do{
        per.push_back(inp);
    }while(next_permutation(inp.begin(), inp.end()));
    cout << per.size() << '\n';
    for(auto i : per) cout << i << '\n';
    return 0;
}
