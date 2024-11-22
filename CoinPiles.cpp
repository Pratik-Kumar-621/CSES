#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    n%=3;
    m%=3;
    if(m==0 && n==0){
        cout << "YES" << endl;
        return;
    }
    if(m==0 || n==0){
        cout << "NO" << endl;
        return;
    }
    else if(m==n){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}