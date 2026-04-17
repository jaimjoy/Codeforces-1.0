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

int cut(int n)
{
    int res=0;
    while(n > 1)
    {
        n = (n+1)/2;
        res++;
    }
    return res;
}
void solve()
{
    int n,m,a,b;cin>>n>>m>>a>>b;
    //check symmetry
    if((n-a+1) < a) a = n-a+1;
    if((m-b+1) < b) b = m-b+1;

    cout<<min(1+cut(n)+cut(b), 1+cut(m)+cut(a))<<nl;
}
 
int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //