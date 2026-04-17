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
    vi v(n), f(n);
    for(int i=0; i<n; i++) cin>>v[i];
    f = v;
    if(prev_permutation(all(f)))
    {
        for(int i=0; i<n; i++)
        {
            cout<<f[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++)
    {
        cout<<v[i];
        if(i<n-1) cout<<" ";
    }
    cout<<endl;

    if(next_permutation(all(v)))
    {
        for(int i=0; i<n; i++)
        {
            cout<<v[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
