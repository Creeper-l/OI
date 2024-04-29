#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 20;
int n,dp[MAXN];
signed main()
{
    cin >> n;
    dp[1] = 1,dp[0] = 1;
    for(int i = 2;i <= n;i++)
        for(int j = 1;j <= i;j++) dp[i] += dp[j - 1] * dp[i - j];
    cout << dp[n];
    return 0;
}