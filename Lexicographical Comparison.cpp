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
    int n,m;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cin>>m;
    vi vv(m);
    for(int i=0; i<m; i++) cin>>vv[i];

    int i=0,j=0;
    while(i<n && j<m)
    {
        if(v[i] > vv[j]) {cout<<0<<endl; return 0;}
        if(v[i] < vv[j]) {cout<<1<<endl; return 0;}
        i++, j++;
    }
    if(n<m) cout<<1<<endl;
    else cout<<0<<endl;

    return 0;
}
