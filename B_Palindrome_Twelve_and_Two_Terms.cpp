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
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

bool pal(string s)
{
    int i=0, j=s.size()-1; 
    while(i<j)
    {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
void solve()
{
    ll n;cin>>n;
    string s = to_string(n);
    if(pal(s))
    {
        cout<<n<<' '<<0<<nl;
        return;
    }
    if(n%12 == 0) 
    {
        cout<<0<<' '<<n<<nl;
        return;
    }

    ll b=12*(n/12), a=n%12;
    while(b > 0)
    {
        string t = to_string(a);
        if(pal(t))
        {
            cout<<t<<' '<<b<<nl;
            return;
        }
        b -= 12;
        a += 12;
    }
    minus;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
