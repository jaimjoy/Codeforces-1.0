#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n,m;
    cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cin>>m;
    vi vv(m);
    map<int,int> mp;
    for(int i=0; i<m; i++) cin>>vv[i], mp[vv[i]]++;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]] == 0) cout<<v[i]<<endl;
    }

    return 0;
}
