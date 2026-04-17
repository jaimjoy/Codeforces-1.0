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
#define eb emplace_back
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
    map<int,set<int>> mp;
    while(n--)
    {
        int a,b,c;cin>>a>>b>>c;
        if(c < 240)
        {
            if(mp[a].count(b) == 0) cout<<b<<nl;
            else cout<<0<<nl;
            mp[a].insert(b);
        }
        else
        {
            if(mp[a].size() < 3)
            {
                if(mp[a].count(b) == 0) cout<<b<<nl;
                else cout<<0<<nl;
            }
            else cout<<0<<nl;
            mp[a].insert(b);
        }
    }
}

int main()
{
    optimize();
    solve();
    // ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //