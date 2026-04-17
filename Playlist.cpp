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
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    deque<int> d;
    map<int,int> mp;
    int ans = 1;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]] == 1)
        {
            while(!d.empty())
            {
                int f = d.front();
                mp[f]--;
                d.pop_front();
                if(f == v[i]) break;
            }
        }
        mp[v[i]]++;
        d.push_back(v[i]);
        ans = max(ans, sz(d));
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//            Alhamdulillah                //
