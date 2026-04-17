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
    int n,k;cin>>n>>k;
    vi v(n);
    map<int,int> mp;
    priority_queue<int,vector<int>,greater<int>> p;

    for(int i=0; i<n; i++) cin>>v[i],mp[v[i]]++;
    for(auto u:mp) p.push(u.ss);
    while(k>0)
    {
        if(k-p.top() >= 0) k -= p.top(), p.pop();
        else break;
    }
    if(sz(p) == 0) cout<<1<<endl;
    else cout<<sz(p)<<endl;

}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
