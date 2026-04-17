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
    int n,d;cin>>n>>d;
    int temp=1;
    vector<pair<int,int>> vp;
    for(int i=0,a,b; i<n; i++)
    {
        cin>>a>>b;
        vp.pb({a,b});
    }
    for(int i=1; i<=d; i++)
    {
        int mx=0;
        for(int j=0; j<n; j++)
        {
            mx = max(vp[j].first*(vp[j].second+i), mx);
        }
        cout<<mx<<endl;
    }

    return 0;
}
