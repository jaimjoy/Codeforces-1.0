#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int solve(int n)
{
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];

    string s = to_string(n);
    int res = INT_MAX;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] > '0')
        {
            int digit = s[i]-'0';
            res = min(res, 1+solve(n-digit));
        }
    }
    return dp[n] = res;
}

int main()
{
    int n;cin>>n;
    memset(dp, -1, sizeof dp);

    cout<<solve(n)<<endl;
    return 0;
}
