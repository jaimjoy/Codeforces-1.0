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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

const int N = 200001;
vector<int> fact(N+1,0);
void solve()
{
    int n;cin>>n;
    vi a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        set<int> st;
        int k = a[i];
        while(k>1)
        {
            st.insert(fact[k]);
            k /= fact[k];
        }
        for(auto u:st) mp[u]++;
    }
    for(auto u:mp)
    {
        if(u.ss > 1) {cout<<0<<nl; return;}
    }
    for(int i=0; i<n; i++)
    {
        set<int> st;
        int k = a[i]+1;
        while(k>1)
        {
            st.insert(fact[k]);
            k /= fact[k];
        }
        for(auto u:st)
        {
            if(mp[u]) {cout<<1<<nl; return;}
        }
    }
    cout<<2<<nl;
}

int main()
{
    optimize();
    //storing factors using sieve
    for(int i=2; i<=N; i++)
    {
        if(fact[i] == 0)
        {
            for(int j=1; i*j<=N; j++)
            {
                fact[i*j] = i;
            }
        }
    }
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
