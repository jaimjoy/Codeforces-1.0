//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
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
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int x,y;cin>>x>>y;
    vi xBin, yBin;
    while(x)//Converting x into binary
    {
        xBin.pb(x%2);
        x /= 2;
    }
    while(y)//Converting y into binary
    {
        yBin.pb(y%2);
        y /= 2;
    }
    while(sz(xBin) != sz(yBin))
    {
        if(sz(xBin) > sz(yBin)) yBin.pb(0);
        else xBin.pb(0);
    }

    ll cnt = 0;
    for(int i=0; i<sz(xBin); i++)
    {
        if(xBin[i] == yBin[i]) cnt++;
        else break;
    }
    ll ans = (1LL<<cnt);
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
