//  In the name of Almighty Allah

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
    ll n,k,b,s;cin>>n>>k>>b>>s;
    vl v(n,0);
    if(k*b > s) {cout<<-1<<nl; return;}

    v[0] = min(s, k*b+(k-1));
    s -= v[0];
    if(s < 0 || (n-1)*(k-1) < s) {cout<<-1<<nl; return;}

    for(int i=1; i<n; i++)
    {
        if(s-k >= 0) v[i] = k-1;
        else if(s-k-1 >= 0) v[i] = k;
        else v[i] = s;
        s-=v[i];
    }
    for(int i=0; i<n; i++) cout<<v[i]<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
