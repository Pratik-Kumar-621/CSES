#include <bits/stdc++.h>
using namespace std;

void solve(){
    cout<<"YES"<<endl;
}

int main(){
    int n; 
    cin >> n;
    long long mod = 1000000000+7;
    long long ans = 1;
    while(n--){
        ans *=2;
        ans%=mod;
        
    }
    cout << ans;
}