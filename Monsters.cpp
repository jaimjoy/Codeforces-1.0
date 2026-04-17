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
    priority_queue<pair<int,int>> pq;
    for(int i=0,a; i<n; i++)
    {
        cin>>a;
        int t = a%k;
        if(a <= k) pq.push({a,i+1});
        else
        {
            if(t == 0) pq.push({k,i+1});
            else pq.push({t,i+1});
        }
    }

    map<int, priority_queue<int, vector<int>, greater<int>> > indx;
    vi unq;
    map<int,int> mp;
    while(!pq.empty())
    {
        indx[pq.top().ff].push(pq.top().ss);
        if(mp[pq.top().ff] == 0) unq.pb(pq.top().ff), mp[pq.top().ff] = -1;
        pq.pop();
    }

    for(auto u:unq)
    {
        while(!indx[u].empty())
        {
            cout<<indx[u].top()<<" ";
            indx[u].pop();
        }
    }
    cout<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
