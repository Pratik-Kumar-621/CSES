#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int len = 1;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            len++;
            ans = max(ans, len);
        }
        else
            len = 1;
    }
    cout << ans << endl;
    return 0;
}