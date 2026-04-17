//                                In the name of Allah                           //
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
/*_________________________________________________________________________________________________________*/

void solve()
{
    string p,s;cin>>p>>s;
    string newp, news;
    vector<pair<int,int>> v, vv;
    for(int i=0; i<sz(p); i++)
    {
        if(newp[sz(newp)-1] != p[i]) newp.pb(p[i]);
    }
    for(int i=0; i<sz(s); i++)
    {
        if(news[sz(news)-1] != s[i]) news.pb(s[i]);
    }
    int cnt=1,t=0;
    for(int i=1; i<=sz(p); i++)
    {
        if(p[i] != p[i-1]) v.pb({t,cnt}), cnt=1, t++;
        else cnt++;
    }
    cnt=1,t=0;
    for(int i=1; i<=sz(s); i++)
    {
        if(s[i] != s[i-1]) vv.pb({t,cnt}), cnt=1, t++;
        else cnt++;
    }
    if(sz(newp) != sz(news)) {NO; return;}
    for(int i=0; i<sz(v); i++)
    {
        if(newp[i] != news[i] || vv[i].ss > 2*v[i].ss || vv[i].ss < v[i].ss) {NO; return;}
    }
    YES;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
