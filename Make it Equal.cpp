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
    int n,k;cin>>n>>k;
    vi s(n),t(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>s[i], s[i] %= k;
    for(int i=0; i<n; i++) cin>>t[i], t[i] %= k, mp[t[i]]++;

    for(int i=0; i<n; i++)
    {
        if(mp[s[i]] == 0 && mp[k-s[i]] == 0) {NO; return;}
        else if(mp[s[i]] > 0) mp[s[i]]--;
        else mp[k-s[i]]--;
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
//            Alhamdulillah                //
