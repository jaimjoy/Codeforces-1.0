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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0') ans++;
        else if(s[i] == '1')
        {
            for(int t=i, j=1; j<=k && t<s.size(); j++)
            {
                t++;
                if(s[t] == '0') s[t] = 'a';
            }
        }
    }
    cout<<count(all(s), '0')<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
