#include <bits/stdc++.h>
using namespace std;

void solve(){
    cout<<"YES"<<endl;
}

int main(){
    long long n; cin >> n;
    cout << 0 << endl;
    for(long long i=2; i<=n;i++){
        long long totalWays = (i*i)*((i*i)-1)/2;
        long long totalConflict = 4*(i-2)*(i-1);
        cout << totalWays-totalConflict << endl;
    }
}