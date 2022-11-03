#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q; cin >> q;
    vector<ll> powerOfTen(19,1);
    for(int i = 1; i < 19; i++) powerOfTen[i] = powerOfTen[i - 1] * 10;
    while(q--){
        ll id; cin >> id;
        ll digitsSoFar = 0;
        ll digitsBeforeActualBlock = 0;
        int numberOfDigits;
        for(int i = 1; i <= 18; i++){
            digitsSoFar += (powerOfTen[i] - powerOfTen[i - 1]) * i;
            if(digitsSoFar >= id){
                numberOfDigits = i;
                break;
            }
            digitsBeforeActualBlock += (powerOfTen[i] - powerOfTen[i - 1]) * i;
        }
        ll smallestValue = powerOfTen[numberOfDigits - 1];
        ll largestValue = powerOfTen[numberOfDigits] - 1;
        ll bestValue = 0;
        ll startingPosOfBestValue;
        while(smallestValue <= largestValue){
            ll actualValue = (smallestValue + largestValue) / 2;
            ll startingPosOfActualValue =
                digitsBeforeActualBlock + 1 + (actualValue - powerOfTen[numberOfDigits - 1]) * numberOfDigits;
            if(startingPosOfActualValue <= id){
                if(actualValue > bestValue){
                    bestValue = actualValue;
                    startingPosOfBestValue = startingPosOfActualValue;
                }
                smallestValue = actualValue + 1;
            }
            else largestValue = actualValue - 1;
        }
        string number = to_string(bestValue);
        cout << number[id - startingPosOfBestValue] << '\n';
    }
    return 0;
}
