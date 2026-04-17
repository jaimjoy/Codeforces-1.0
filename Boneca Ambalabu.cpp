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
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        bitset<31> b(v[i]);
        for(int bit=0; bit<30; bit++)
        {
            if(b[bit] == 1) mp[bit]++;
        }
    }

    ll ans=0;
    for(int i=0; i<n; i++)
    {
        bitset<31> b(v[i]);
        ll temp=0;
        for(int bit=0; bit<30; bit++)
        {
            int cnt = 0;
            if(b[bit] == 1) cnt = n-mp[bit];
            else cnt = mp[bit];
            temp += cnt * pow(2, bit);
        }
        ans = max(ans, temp);
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //