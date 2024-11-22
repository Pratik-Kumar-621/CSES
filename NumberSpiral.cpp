#include <bits/stdc++.h>
using namespace std;

long long solve(){
    long long row , col; // 1 3 5 7 9
    cin >> row >> col;
    long long  maximum = max(row, col);
    long long startValue = (maximum-1)*(maximum-1);
    long long endValue = maximum*maximum;
    // finding the direction
    long long ch = 2;
    bool dir;
    if(maximum%2==0) dir = false;
    else dir = true;
    if(dir){
        if(row>col) return startValue + col;
        else return endValue - row + 1;
    }
    else{
        if(row>col) return endValue - col + 1;
        else return startValue + row;
    }
    return 0;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        cout << solve() << endl;
    }
}