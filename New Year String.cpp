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

int main()
{
    optimize();
    ll tc;cin>>tc;
    tc--;
    do
    {
        int n;cin>>n;
        string s;cin>>s;
        bool f=0, ff=0;
        for(int i=0; i<s.size()-3; i++)
        {
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6') f=1;
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') ff=1;
        }
        if(f) cout<<0<<nl;
        else if(!f && !ff) cout<<0<<nl;
        else if(ff) cout<<1<<nl;
        else cout<<0<<nl;
    }
    while(tc--);
    return 0;
}
//         Alhamdulillah         //