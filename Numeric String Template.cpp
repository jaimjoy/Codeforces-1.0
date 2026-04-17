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
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int n,q;cin>>n;
    vi v(n);
    map<int,vector<int>> mp;//storing elements indexes
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]].pb(i);
    cin>>q;
    while(q--)
    {
        string s;cin>>s;
        if(sz(s) != n) {NO; continue;}
        map<char,vector<int>> mpp;//storing char's indexed
        map<char,int> vis;//unique char's index
        for(int i=0; i<n; i++) mpp[s[i]].pb(i);
        vector<int> uniq;
        for(int i=0; i<n; i++)
        {
            if(vis[s[i]] == 0)
            {
                uniq.pb(i);
                vis[s[i]] = 1;
            }
        }
        bool f=0;
        for(auto x:uniq)
        {
            //v[x] is the element in v vector
            //s[x] is the char in string
            //mp[v[x]] is the v[x] elements all indexes
            //mpp[s[x]] is the s[x] char's all indexes
            //mp[] & mpp[]'s vector must be equal
            if(mp[v[x]] != mpp[s[x]])
            {
                f=1;
                break;
            }
        }
        if(f) {NO;}
        else YES;
    }

}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
