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
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ans;
    ll mn = v[n-1];
    for(int i=n-1; i>=0; i--)
    {
        if(i == n-1) ans.pb(0);
        else
        {
            ll temp = abs(v[i] - mn);
            ll cnt1=0, cnt2=0;
            for(int j=i+1; j<n; j++)
            {
                if(v[j] > v[i]) cnt2++;
                if(abs(v[j]-mn) < temp) cnt1++;
            }
            ans.pb(max(cnt1, cnt2));
        }

        mn = min(mn, v[i]);
    }
    reverse(all(ans));
    for(auto u:ans) cout<<u<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //