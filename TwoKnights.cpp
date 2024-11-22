#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int b){
    if(i<=0 || j<=0 || i>b || j>b) return false;
    return true;
}

void solve(){
    int n;
    cin>>n;
    
    vector<pair<int, int> > movements = {{-1, -2}, {-1, 2}, {-2, -1}, {-2, 1}};

    vector<int> ans;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(i==1) ans.push_back(0);
        // row movement
        int totalcells = (i-1)*(i-1);
        int curr_count = 0;
        for(int j=1; j<=i; j++){
            // find valid counts
            int totalMatch = 0;
            for(auto it:movements){
                if(isValid(i+it.first, j+it.second, i)) totalMatch++;
            }
            int validPairs = totalcells - totalMatch;

            // no corner
            if(i!=j){
                curr_count += 2*validPairs;
            }

            // corner
            else{
                curr_count+=validPairs;
            }

        }
        count+=curr_count;
        ans.push_back(count);
        curr_count = 0;

        
    }
    for(auto it:ans) cout << it << endl;
}

int main(){
    
    solve();
    
}