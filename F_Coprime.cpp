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

const int N = 25000001;
vector<int> primes(N, 1);
vector<int> pref(N);
vector<int> last(N);

void solve()
{
    int n;cin>>n;
    if(n==1)
    {
        cout<<1<<nl;
        cout<<1<<nl;
        return;
    }

    int k = n*n;
    int mid = k/2;
    if(mid%2==0) mid++;

    ll cnt = pref[k] - pref[mid-1];

    if(cnt == 0)
    {
        cout<<0<<nl;
        minus;
    }
    else 
    {
        cout<<cnt<<nl;
        cout<<last[k]<<nl;
    }
}

int main()
{
    optimize();
    primes[0] = 0;
    primes[1] = 0;
    for(int i=2; i*i<N; i++)
    {
        if(primes[i])
        {
            for(int j=i*i; j<N; j+=i)
            {
                primes[j] = false;
            }
        }
    }

    pref[0] = 0;
    for(int i=1; i<N; i++)
    {
        pref[i] = pref[i-1] + primes[i];
        if(primes[i])
        {
            last[i] = i;
        }
        else last[i] = last[i-1];
    }
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
