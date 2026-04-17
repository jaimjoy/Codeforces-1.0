#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    ll n;cin>>n;
    deque<pair<ll,ll>> d;
    ll t = 0;
    while(n--)
    {
        ll a;cin>>a;
        if(a==1)
        {
            ll b;cin>>b;
            if(d.empty()) d.push_back({0,b});
            else d.push_back({d.back().ff+d.back().ss,b});
        }
        else if(a==3)
        {
            ll b;cin>>b;
            b--;
            cout<<d[b].ff-t<<endl;
        }
        else
        {
            t += d.front().ss;
            d.pop_front();
        }
    }

    return 0;
}
