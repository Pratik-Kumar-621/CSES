#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long totalSum = 1l*n*(n+1);
    totalSum/=2;
    if(totalSum%2!=0) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        vector<int> ans1, ans2;
        ans1.push_back(n);
        int t=0;
        bool flag = true;
        for(int i=n-1; i>=1; i--){
            if(t==2){
                flag = !flag;
                t=0;
            }
            if(flag){
                ans2.push_back(i);

            }
            else{
                ans1.push_back(i);
            }
            t++;
        }
        cout << ans1.size() << endl;
        for(int i=0; i< ans1.size(); i++) cout << ans1[i] << " ";
        cout << endl;
        cout << ans2.size() << endl;
        for(int i=0; i< ans2.size(); i++) cout << ans2[i] << " ";
        cout << endl;
    }
    return 0;
}