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
    vi a(n), aa(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>aa[i];

    int l=-1, r=-1;
    priority_queue<int> hi;
    priority_queue<int, vector<int>, greater<int>> lo;
    for(int i=0; i<n; i++)
    {
        if(a[i] != aa[i] && l == -1)
        {
            l=i;
            hi.push(aa[i]);
            lo.push(aa[i]);
        }
        else if(a[i] != aa[i])
        {
            r = i;
            hi.push(aa[i]);
            lo.push(aa[i]);
        }
    }

    int j=l, k=r;
    for(int i=j-1; i>=0; i--)
    {
        if(lo.top() >= a[i]) lo.push(a[i]), l--;
        else break;
    }
    for(int i=k+1; i<n; i++)
    {
        if(hi.top() <= a[i]) hi.push(a[i]), r++;
        else break;
    }
    cout<<l+1<<' '<<r+1<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
