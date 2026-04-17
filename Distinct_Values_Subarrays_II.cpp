//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
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
    int n,k;cin>>n>>k;
    queue<int> x;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        x.push(a);
    }

    queue<int> window;
    map<int,int> mp;
    ll ans=0;
    while(!x.empty())
    {
        int a = x.front();
        x.pop();
        window.push(a);
        mp[a]++;
        if(sz(mp) > k)
        {
            while(sz(mp)>k)
            {
                int b = window.front();
                window.pop();
                mp[b]--;
                if(mp[b] == 0) mp.erase(b);
            }
        }
        ans += sz(window);
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//         Alhamdulillah         //
