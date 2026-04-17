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
    ll n,q;cin>>n>>q;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll sum = accumulate(all(v), 0LL);

    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++) vp.pb({v[i], 0});
    
    pair<int,int> globalVal = {0,-1};

    for(int k=0; k<q; k++)
    {
        ll t,i,x;cin>>t;
        if(t == 1)
        {
            cin>>i>>x;
            i--;

            if(vp[i].ss > globalVal.ss)
            {
                sum = sum + (x - vp[i].ff);
            }
            else 
            {
                sum = sum + (x - globalVal.ff);
            }

            vp[i].ff = x;
            vp[i].ss = k;
        }
        else
        {
            cin>>x;
            globalVal.ff = x;
            globalVal.ss = k;
            sum = n*x;
        }
        cout<<sum<<nl;
    }
}

int main()
{
    optimize();
    solve();
    // ll tc;cin>>tc;
    // for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //