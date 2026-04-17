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
#define rall(a) (a).rbegin(),(a).rend()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n;cin>>n;
    vi v(n+1), vv(n+1);
    map<int,int> mp, mpp;
    for(int i=1; i<=n; i++) cin>>v[i];
    for(int i=1; i<=n; i++) cin>>vv[i], mp[vv[i]] = i;
    vi vvv(n+1);
    vvv = vv;
    sort(all(vv));
    for(int i=1; i<=n; i++)
    {
        // vv[i] = 1,2,3.....n(sorted taii)
        // mp[vv[i]] = accessing index of vv[i]
        // v[mp[vv[i]]] = finding value of mp[vv[i]] in v vector
        // vvv[v[mp[vv[i]]]] = printing iTH value which is required
        cout<<vvv[v[mp[vv[i]]]];
        if(i<n) cout<<" ";
    }
    cout<<endl;

    return 0;
}
