//                                In the name of Allah                           //
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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    string s;cin>>s;
    deque<char> d;
    map<char,int> mp;
    int ans = INT_MAX;
    for(int i=0; i<sz(s); i++)
    {
        mp[s[i]]++;
        d.push_back(s[i]);
        if(sz(mp) == 3)
        {
            while(!d.empty())
            {
                if(sz(mp) == 3) ans = min(ans, sz(d));
                if(sz(mp) < 3) break;
                char f = d.front();
                mp[f]--;
                if(mp[f] == 0) mp.erase(f);
                d.pop_front();
            }
        }
    }
    if(ans == INT_MAX) cout<<0<<nl;
    else cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
