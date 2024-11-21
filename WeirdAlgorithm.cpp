#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
    }
    cout << 1 << endl;
}

int main(){
    int t = 1;
   
    while(t--){
        solve();
    }
}