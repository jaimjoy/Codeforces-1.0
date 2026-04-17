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
    vi v(n), s(n);
    for(int i=0; i<n; i++) cin>>v[i];

    s = v;
    sort(allr(s));
    int k=0;

    int ind=-1, last=-1;
    for(int i=0; i<n; i++)
    {
        if(s[k] == v[i]) 
        {
            k++;
            continue;
        }
        else
        {
            last=i;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[k] == v[i]) 
        {
            ind = i;
            break;
        }
    }
    if(last == -1)
    {
        for(auto u:v) cout<<u<<' ';
        cout<<nl;
        return;
    }
    for(int i=0; i<last; i++) cout<<v[i]<<' ';
    for(int i=ind; i>=last; i--) cout<<v[i]<<' ';
    for(int i=ind+1; i<n; i++) cout<<v[i]<<' ';
    cout<<nl;
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