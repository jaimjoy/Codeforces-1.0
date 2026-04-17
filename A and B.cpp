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

ll check(vector<int> pos)
{
    if(pos.empty()) return 0;

    ll sum = 0;
    int mid = pos.size()/2;
    for(int i=0; i<pos.size(); i++)
    {
        sum += abs(pos[mid] - pos[i]);//val difference
        sum -= abs(mid-i);//index difference
    }
    return sum;
}
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vi apos, bpos;
    for(int i=0; i<n; i++)
    {
        (s[i] == 'a') ? apos.pb(i):bpos.pb(i);
    }
    cout<<min(check(apos), check(bpos))<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //