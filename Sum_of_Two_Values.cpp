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
    int n,x;cin>>n>>x;
    vector<pair<int,int>> v;
    map<int,int> mp;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        v.pb({a,i+1});
    }
    sort(all(v));

    int l=0, r=n-1;
    while(l < r)
    {
        if(v[l].ff + v[r].ff > x) r--;
        else if(v[l].ff + v[r].ff < x) l++;
        else {cout<<v[l].ss<<' '<<v[r].ss; return;}
    }
    cout<<"IMPOSSIBLE";
}

int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();*/
    return 0;
}
//         Alhamdulillah         //
