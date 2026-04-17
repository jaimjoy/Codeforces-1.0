#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define ll long long

int isOK(ll mid, int n)
{
    if(mid*mid <= n) return 0;
    return 1;
}
int main()
{
    int n;cin>>n;
    int l=0, r=1e9+1;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if(isOK(mid,n) == 0) l = mid+1;
        else r = mid;
    }
    cout<<(l-1)*(l-1)<<nl;
    return 0;
}
