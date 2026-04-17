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

void solve()
{
    ll n;cin>>n;
    while(1)
    {
        ll nn = n;
        vi digit;
        while(nn>0)
        {
            if(nn%10 > 1) digit.pb(nn%10);
            nn/=10;
        }
        bool f=0;
        for(int i=0; i<digit.size(); i++)
        {
            if(n%digit[i] != 0) {f=1; break;}
        }
        if(!f) {cout<<n<<nl; return;}
        
        n++;
    }
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
