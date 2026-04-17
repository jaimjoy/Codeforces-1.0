//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n,s;cin>>n>>s;
    vi v(n+1,0);
    for(int i=1; i<=n; i++) 
    {
        cin>>v[i];
        v[i] = v[i-1] + v[i];
    }
    if(v[n] < s) {minus; return;}
    
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int l=i, r=n;
        while(l<r)
        {
            int mid = (l+r+1)/2;
            if(v[mid] - v[i-1] <= s)
            {
                l = mid;
            }
            else
            {
                r = mid-1;
            }
        }
        ans = max(ans, l - i + 1);
    }
    cout<<n - ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //