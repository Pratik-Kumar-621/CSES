#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int ans = 0;

    for(auto it:arr){
        ans=ans^it;
    }
    for(int i=1; i<=n; i++){
        ans^=i;
    } 
    cout << ans <<  endl;
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}