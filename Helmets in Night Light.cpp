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
    int n,p;cin>>n>>p;
    vector<pair<ll,ll>> vp(n);
    vi v(n),vv(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>vv[i];
    for(int i=0; i<n; i++) vp[i] = {min(vv[i], p), v[i]};// {cost, person}

    sort(all(vp));
    ll cost=p;
    ll person=n-1;
    for(int i=0; i<n-1; i++)
    {
        cost += min(person,vp[i].ss) * vp[i].ff;
        person -= min(vp[i].ss, person);
    }
    cout<<cost<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
