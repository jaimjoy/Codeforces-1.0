#include<bits/stdc++.h>
using namespace std;

int n, h[100005], dp[100005];

int solve(int i)
{
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];

    int res=INT_MAX;
    //i -> i+1
    int cost = abs(h[i]-h[i+1]) + solve(i+1);
    res = min(res, cost);

    //i -> i+2
    if(i+2 <= n)
    {
        cost = abs(h[i]-h[i+2]) + solve(i+2);
        res = min(res, cost);
    }
    return dp[i] = res;
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>h[i];
    memset(dp, -1, sizeof dp);
    cout<<solve(1)<<endl;

    return 0;
}
