//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int pre[n+5];
    pre[0] = 0;
    for(int i=0; i<n; i++)
    {
        int num = s[i] - '0';
        pre[i+1] = pre[i] + num;
    }
    map<int,int> mp;
    ll ans=0;
    for(int i=0; i<=n; i++)
    {
        int val = pre[i] - i;
        ans += mp[val];
        mp[val]++;
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
