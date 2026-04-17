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

bool check(vector<int> &v, int x)
{
    vector<int> newV;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] != x) newV.pb(v[i]);
    }

    int i=0, j=newV.size()-1;
    while(i<j)
    {
        if(newV[i] != newV[j]) return false;
        i++;
        j--;
    }
    return true;
}
void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int i=0, j=n-1;
    while(i<j)
    {
        if(v[i] != v[j])
        {
            if(check(v, v[i]) || check(v, v[j])) YES; 
            else NO;
            return;
        }
        i++;
        j--;
    }
    YES;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
