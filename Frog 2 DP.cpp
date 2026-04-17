#include<bits/stdc++.h>
using namespace std;

int n, k, h[100005], dp[100005];

int solve(int i, int k)
{
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];

    int res=INT_MAX;

    for(int j=1; j<=k; j++)
    {
        if(i+j <= n)
        {
            int cost = abs(h[i]-h[i+j]) + solve(i+j, k);
            res = min(res, cost);
        }
    }
    return dp[i] = res;
}

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>h[i];
    memset(dp, -1, sizeof dp);
    cout<<solve(1, k)<<endl;

    return 0;
}
