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
    int q;cin>>q;
    for(int i=1; i<=q; i++)
    {
        int n;cin>>n;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(all(v));
        for(int i=1; i<n; i+=2)
        {
            if(v[i] < v[i-1]) swap(v[i], v[i-1]);
            if(i+1 < sz(v) && v[i] < v[i+1]) swap(v[i], v[i+1]);
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
