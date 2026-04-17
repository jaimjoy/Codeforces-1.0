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
    int n,q;cin>>n>>q;
    string a,b;cin>>a>>b;

    map<char, vector<int> > mapA, mapB;
    for(int i=0; i<n; i++)
    {
        mapA[a[i]].pb(i+1);
        mapB[b[i]].pb(i+1);
    }

    while(q--)
    {
        int l,r;cin>>l>>r;
        int ans = 0;
        for(char i='a'; i<='z'; i++)
        {
            auto left = lower_bound(all(mapA[i]), l);
            auto right = upper_bound(all(mapA[i]), r);
            int cntA = distance(left, right);

            left = lower_bound(all(mapB[i]), l);
            right = upper_bound(all(mapB[i]), r);
            int cntB = distance(left, right);

            ans += max(cntA-cntB, 0);
        }
        cout<<ans<<nl;
    }
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