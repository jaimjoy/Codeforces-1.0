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
    int n;cin>>n;
    vl v(n);
    ll sum=0;
    for(int i=0; i<n; i++) cin>>v[i], sum += v[i];

    vl temp = v;
    while(temp.size() > 1)
    {
        vl t;
        ll tempsum=0, tempsum2=0;
        for(int i=1; i<temp.size(); i++)
        {
            ll diff = temp[i]-temp[i-1];
            t.pb(diff);
            tempsum+=diff;
        }
        for(int i=temp.size()-1; i>=1; i--)
        {
            ll diff = temp[i-1]-temp[i];
            tempsum2+=diff;
        }
        temp = t;
        sum = max({sum, tempsum, tempsum2});
    }
    cout<<sum<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
