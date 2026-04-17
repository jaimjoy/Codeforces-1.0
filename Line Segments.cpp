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
    double n, x1,y1,x2,y2;cin>>n>>x1>>y1>>x2>>y2;
    vector<double> v;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }

    double distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    v.pb(distance);

    sort(all(v));
    double sum=0;
    for(int i=0; i<v.size()-1; i++) sum += v[i];

    if(v[v.size()-1] <= sum) YES;
    else NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
