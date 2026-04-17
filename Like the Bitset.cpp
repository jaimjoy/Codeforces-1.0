//      In the name of Allah      //
/*
    One day I'll be no more,
    but my code will !
*/
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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int total = count(all(s), '1');
    int sub=1, seq=0;
    for(int i=1; i<n; i++)
    {
        if(s[i] == '1' && s[i-1] == '1') sub++;
        else sub=1;
        seq = max(seq, sub);
    }
    if(seq >= k && total > 0) {NO; return;}
    if(total == n) {NO; return;}

    vi v(n);
    int a=1,b=n;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1') v[i] = a++;
        else v[i] = b--;
    }
    YES;
    for(int u=0; u<n; u++) cout<<v[u]<<' ';
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
