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
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    string s;cin>>s;
    int n = s.size();
    vector<int> suf(n+1), pre(n+1);
    for(int i=0; i<n; i++)
    {
        (i ? pre[i]=pre[i-1] : 0);
        if(s[i] == '1' || s[i] == '3') 
        {
            pre[i]++;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        suf[i] = suf[i+1];
        if(s[i] == '2') suf[i] = suf[i+1]+1;
    }

    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int left = (i>0 ? pre[i-1]:0);// 1,3
        int right = suf[i+1];// 2
        mn = min(mn, left + right);
    }
    cout<<mn + count(all(s),'4')<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
