#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
        k ^= i;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        k ^= temp;
    }
    cout << k;
    return 0;
}