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
#define zero cout<<"0\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;
    string s;cin>>n>>s;
    map<char,int> mp;
    for(int i=0; i<n; i++) mp[s[i]]++;
    
    int dif = mp['a'] - mp['b'];
    if(dif == 0) {zero; return;}

    vector<int> pre(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        pre[i] = pre[i-1] + (s[i-1] == 'a' ? 1:-1);
    }

    map<int,int> cnt;
    cnt[0] = 0;
    int ans=n;
    for(int i=1; i<=n; i++)
    {
        int need = pre[i] - dif;
        if(cnt.find(need) != cnt.end())
        {
            int len = i - cnt[need];
            ans = min(ans, len);
        }
        cnt[pre[i]] = i;
    }

    if(ans == n) minus;
    else cout<<ans<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
