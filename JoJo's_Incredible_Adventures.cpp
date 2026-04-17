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
    string s;cin>>s;
    ll one = count(all(s), '1');
    if(one == s.size()) {cout<<one*one<<nl; return;}

    string ans = "";
    int k=0;
    while(s[k] == '1') ans += '1', k++;
    for(int i=s.size()-1; i>=k; i--) ans += s[i];

    ll seq=0, res=0;
    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i] == '1') seq++;
        else res = max(res, seq), seq=0;
        res = max(res, seq);
    }
    cout<<((res+1)/2) * ((res+2)/2)<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
