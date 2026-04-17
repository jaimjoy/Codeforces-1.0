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
    int n;cin>>n;
    vector<pair<int,int>> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i].ff;
        v[i].ss = i;
    }

    sort(all(v));
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int ai = v[i].ss;
            int aj = v[j].ss;
            ll mul = v[i].ff * v[j].ff;
            if(mul > 2*n) break;
            else
            {
                if(ai < aj && (ai+aj == mul)) ans++;
            }
        }
    }
    //complexity O(n logn)
    cout<<ans<<nl;
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