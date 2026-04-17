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

string p,t;
vi v;
int canConvert(int mid)
{
    vi deleted(sz(p),0);
    for(int i=0; i<mid; i++)
    {
        deleted[v[i]-1] = 1;
    }
    int cnt=0;
    for(int i=0; i<sz(p); i++)
    {
        if(!deleted[i] && p[i] == t[cnt]) cnt++;
    }
    if(cnt == sz(t)) return 0;
    return 1;
}
int isOK(int mid)
{
    if(canConvert(mid) == 0) return 0;
    return 1;
}
void solve()
{
    cin>>p>>t;
    for(int a,i=0; i<sz(p); i++)
    {
        cin>>a;
        v.pb(a);
    }
    int l=0, r=sz(p);
    while(l<r)
    {
        int mid = (l+r)/2;
        if(isOK(mid) == 0) l = mid+1;
        else r = mid;
    }
    cout<<l-1;
}

int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();*/
    return 0;
}
//            Alhamdulillah                //
