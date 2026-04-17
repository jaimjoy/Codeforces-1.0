#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int vis[1000005], dp[1000005];

int solve(int sum)
{
    if(sum == 0) return 1;
    if(vis[sum] == 1) return dp[sum];

    int res = 0;
    for(int i=1; i<=6; i++)
    {
        if(sum >= i)
        {
            res += solve(sum-i);
            res %= mod;
        }
    }
    vis[sum] = 1;
    dp[sum] = res;
    return res;
}

int main()
{
    int sum;cin>>sum;
    cout<<solve(sum)<<endl;
    return 0;
}
