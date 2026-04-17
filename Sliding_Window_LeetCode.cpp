//                                In the name of Allah                           //
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
#define YES {cout<<"Yes"<<endl;}
#define NO  {cout<<"No"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n,k;cin>>n>>k;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll sum = accumulate(v.begin(), v.end(), 0LL);
    int kk = n-k;
    ll window=0;
    for(int i=0; i<kk; i++) window += v[i];

    long long mnsum = window;
    for(int i=0; i<n-kk; i++)
     {
        window += v[i+kk] - v[i];
        mnsum = min(mnsum, window);
    }
    cout<<sum-mnsum<<nl;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//            Alhamdulillah                //
