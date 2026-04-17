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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int a,b;cin>>a>>b;
    int xk,yk;cin>>xk>>yk;
    int xq,yq;cin>>xq>>yq;

    set<pair<int,int>> st1, st2;
    vector<int> ab = {a, -1*a, b, -1*b};
    vector<int> aa = {a, -1*a};
    vector<int> bb = {b, -1*b};
    
    for(int i=0; i<2; i++)
    {
        st1.insert({xk+ab[i], yk+bb[0]});
        st1.insert({xk+ab[i], yk+bb[1]});

        st2.insert({xq+ab[i], yq+bb[0]});
        st2.insert({xq+ab[i], yq+bb[1]});
    }
    for(int i=2; i<4; i++)
    {
        st1.insert({xk+ab[i], yk+aa[0]});
        st1.insert({xk+ab[i], yk+aa[1]});

        st2.insert({xq+ab[i], yq+aa[0]});
        st2.insert({xq+ab[i], yq+aa[1]});
    }
    ll ans=0;
    for(auto &u:st2)
    {
        if(st1.find(u) != st1.end()) ans++;
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
