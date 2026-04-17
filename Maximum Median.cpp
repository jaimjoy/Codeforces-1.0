#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define ll long long

ll n,k;
vector<ll> v;

ll check(ll mid)
{
    ll ans = 0;
    for(int i=n/2; i<n; i++)
    {
        if(v[i] < mid) ans += mid-v[i];
    }
    return ans;
}
int isOK(ll mid)
{
    if(check(mid) <= k) return 0;
    return 1;
}
void solve()
{
    cin>>n>>k;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    ll l=0, r=1e9+1+k;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if(isOK(mid) == 0) l = mid + 1;
        else r = mid;
    }
    cout<<l-1<<nl;
}
int main()
{
    solve();
    return 0;
}
