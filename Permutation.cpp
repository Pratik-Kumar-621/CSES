#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

     if(n>1 && n<=3) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    for(int i=n; i>=1; i--){
        if(i%2!=0) cout << i << " ";
    }
    for(int i=n; i>=1; i--){
        if(i%2==0) cout << i << " ";
    }
    cout << endl;
}

int main(){

        solve();

}