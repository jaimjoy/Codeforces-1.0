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

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int i=0, j=n-1;
    vi ans;
    while(i<j)
    {
        if(s[i] != s[j])
        {
            if(s[i] == '0') ans.pb(i+1), i++;
            else ans.pb(j+1), j--;
        }
        else i++, j--;
    }
    sort(all(ans));
    cout<<ans.size()<<nl;
    for(auto u:ans) cout<<u<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
