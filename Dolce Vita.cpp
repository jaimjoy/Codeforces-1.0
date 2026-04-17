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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n,x;cin>>n>>x;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(all(v));
    ll temp=0;
    vl pre, pref;
    for(int i=0; i<n; i++)
    {
        if(temp+v[i] <= x) 
        {
            temp+=v[i];
            pref.pb(temp);
            pre.pb(v[i]);
        }
    }

    if(pre.empty()) cout<<0<<nl;
    else
    {
        ll ans = x - pre[0] + 1;
        for(int i=1; i<pre.size(); i++)
        {
            int l=pre[i], r=x;
            int cnt = 0;
            while(l<=r)
            {
                int mid = (l+r)/2;
                ll before = pref[i-1]+(i+1) * (mid-pre[i])+pre[i];
                if(before > x) r = mid-1;
                else 
                {
                    l = mid+1;
                    cnt = mid-pre[i]+1;
                }
            }
            ans += cnt;
        }
        cout<<ans<<nl;
    }
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