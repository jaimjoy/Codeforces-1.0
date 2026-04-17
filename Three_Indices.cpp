//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]] = i;
    vi pre(n,v[0]), suf(n,v[n-1]);
    for(int i=1; i<n; i++)
    {
        pre[i] = min(pre[i-1], v[i]);
    }
    for(int i=n-2; i>=0; i--)
    {
        suf[i] = min(suf[i+1], v[i]);
    }
    for(int i=1; i<n-1; i++)
    {
        if(v[i] > pre[i-1] && v[i] > suf[i+1])
        {
            YES;
            cout<<mp[pre[i-1]]+1<<' '<<i+1<<' '<<mp[suf[i+1]]+1<<nl;
            return;
        }
    }
    NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
