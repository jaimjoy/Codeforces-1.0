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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n,m;cin>>n>>m;
    vi v(m);
    for(int i=0; i<m; i++) cin>>v[i];
    sort(all(v));

    vi gaps;
    for(int i=1; i<m; i++) gaps.pb(v[i]-v[i-1]-1);
    gaps.pb(v[0]-v[m-1]+n-1);//values between first and last elements
    sort(allr(gaps));
    
    ll day=0, saves=0;
    for(int i=0; i<gaps.size(); i++)
    {
        if(gaps[i] > 2*day)
        {
            int remains = gaps[i] - 2*day;
            if(remains > 1) saves += remains - 1;//1ta sudhu badd jabe
            else saves += remains;
        }
        day += 2;
    }
    cout<<n - saves<<nl;
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