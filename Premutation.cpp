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
    int n;cin>>n;
    vector<vector<int>> v(n);
    vector<int> ans;
    map<int,int> mp;
    for(int k=0; k<n; k++)
    {
        for(int i=0,a; i<n-1; i++)
        {
            cin>>a;
            v[k].pb(a);
            if(i == n-2) ans.pb(a);
        }
    }
    for(auto u:ans) mp[u]++;
    int ele=-1;
    for(auto u:mp)
    {
        if(u.ss == 1) {ele = u.ff; break;}
    }

    mp.clear();
    for(int i=0; i<n; i++)
    {
        if(v[i][sz(v[i])-1] == ele)
        {
            for(int j=0; j<n-1; j++)
            {
                cout<<v[i][j]<<" ";
                mp[v[i][j]] = 1;
            }
            break;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i] == 0) cout<<i<<endl;
    }
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
