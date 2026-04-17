#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n,m;cin>>n>>m;
    map<pair<int,int>, int> mp;
    ll cnt=0;
    while(m--)
    {
        int u,v;cin>>u>>v;
        if(u != v && mp[{u,v}] == 0 && mp[{v,u}] == 0) mp[{u,v}] = 1,mp[{v,u}] = 1;
        else cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
