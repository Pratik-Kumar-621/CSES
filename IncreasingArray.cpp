#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    long long ans =0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            long long diff = arr[i-1]-arr[i];
            ans+=diff;
            arr[i] = arr[i-1];
        }
    }
    cout << ans << endl;
}

int main(){

        solve();

}