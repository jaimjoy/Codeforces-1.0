//      In the name of Allah      //
/*
    One day I'll be no more,
    but my code will !
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> msi;
typedef vector<ll> msl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    priority_queue<int> p;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        p.push(a);
    }
    
    ll ans=0;
    while(!p.empty())
    {
        int a = p.top();
        int b = 0;
        p.pop();
        if(!p.empty())
        {
            b = p.top();
            p.pop();
        }
        ans += max(a,b);
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
