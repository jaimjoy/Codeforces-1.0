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
 
void solve()
{
    int n,ii,jj;cin>>n>>ii>>jj;
    if(ii>jj) swap(ii, jj);
    string s = to_string(n);

    vector<char> v;
    for(int i=0; i<s.size(); i++) v.pb(s[i]);

    vector<char> anss = v;
    vector<char> ans = v;
    int sz = 1;
    for(int i=2; i<=v.size(); i++) sz*=i;
    
    for(int i=2; i<=sz; i++)
    {
        next_permutation(all(v));
        if(i == ii) {anss = v;}
        if(i == jj) {ans = v;}
    }

    int cnt=0;
    for(int i=0; i<anss.size(); i++)
    {
        if(anss[i] == ans[i]) cnt++;
    }
    cout<<cnt<<'A'<<anss.size()-cnt<<'B'<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //