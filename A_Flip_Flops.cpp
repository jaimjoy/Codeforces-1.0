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
    ll n,c,k;cin>>n>>c>>k;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    priority_queue<ll,vector<ll>, greater<ll>> p;
    for(int i=0; i<n; i++)
    {
        p.push(v[i]);
    }

    ll ans=c;
    while(!p.empty())
    {
        if(p.top() > c) {break;}
        else if(k > 0)
        {
            ll temp = c - p.top();
            if(temp <= k) k-= temp, ans+=p.top()+temp, c += p.top()+temp;
            else
            {
                ans += p.top();
                ans += k;
                c += p.top();
                c += k;
                k = 0;
            }
        }
        else ans += p.top(), c+=p.top();
        p.pop();
    }

    cout<<ans<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //