#include<bits/stdc++.h>
using namespace std;

int dp[50];

int solve(int step)
{
    if(step == 0) return 1;
    if(dp[step] != -1) return dp[step];

    int res = 0;
    for(int i=1; i<=2; i++)
    {
        if(step>=i)
        {
            res += solve(step-i);
        }
    }
    dp[step] = res;
    return res;
}

int main()
{
    int step;cin>>step;
    memset(dp, -1, sizeof dp);

    cout<<solve(step)<<endl;
    return 0;
}
