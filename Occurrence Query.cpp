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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n;cin>>n;
    map<ll,ll> mp;
    while(n--)
    {
        ll a,b;cin>>a>>b;
        mp[a] += 1;
        mp[b+1] -= 1;
    }
    ll sum=0;
    for(auto &u:mp)
    {
        sum += u.ss;
        u.ss = sum;
    }
    int q;cin>>q;
    while(q--)
    {
        ll t;cin>>t;
        auto it = mp.upper_bound(t);
        if(it == mp.begin()) cout<<0<<endl;
        else {--it; cout<<it->second<<endl;}
    }
}

int main()
{
    optimize();
    solve();
    //ll tc;cin>>tc;
    //for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
