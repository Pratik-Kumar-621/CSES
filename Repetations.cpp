#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1;
    int temp = 1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            temp++;
            ans = max(ans,temp);
        }
        else temp = 1;

    }
    cout << ans << endl;
}

int main(){

        solve();

}