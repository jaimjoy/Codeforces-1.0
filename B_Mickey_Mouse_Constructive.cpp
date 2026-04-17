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
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

vector<int> divs(200005, 0);
void solve()
{
    int x,y;cin>>x>>y;
    cout<<max(1, divs[abs(x-y)])<<nl;
    while(x > 0) cout<<1<<' ', x--;
    while(y > 0) cout<<-1<<' ', y--;
    cout<<nl;
}

int main()
{
    optimize();
    for(int i=1; i<200005; i++)
    {
        for(int j=i; j<200005; j+=i)
        {
            divs[j]++;
        }
    }
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //