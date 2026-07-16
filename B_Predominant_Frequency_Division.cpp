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

const int MOD = 998244353;
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
ll modPow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b/=2;}return res;}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    //Condition A: 1 >= (2+3)
    int i=0, one=0;
    bool a=0;
    for(; i<n; i++)
    {
        if(v[i] == 1) one++;
        if(one >= (i+1)-one)
        {
            a = 1;
            i++;
            while(i<n && v[i] == 3) 
            {
                if(one < (i+1)-one) break;
                i++;
            }
            break;
        }
    }

    //Condition B: (1+2) >= 3
    int onetwo=0, cnt=0;
    bool b=0;
    for(; i<n; i++)
    {
        cnt++;
        if(v[i] != 3) onetwo++;
        if(onetwo >= cnt-onetwo)
        {
            b=1;
            i++;
            break;
        }
    }
    if(a && b && i<n) YES;
    else NO;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //