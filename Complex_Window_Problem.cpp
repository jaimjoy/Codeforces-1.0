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

    vector<int> mp(k+1, 0);//map
    queue<int> window;
    int present=0;

    //Initial window
    while(!x.empty())
    {
        int v = x.front();
        x.pop();
        window.push(v);
        if(v <= k)
        {
            mp[v]++;
            if(mp[v] == 1) present++;
        }
        if(present == k) break;
    }

    int ans = INT_MAX;
    while(1)
    {
        if(present == k)  ans = min(ans, sz(window));
        int v = window.front();
        window.pop();
        if(v <= k)
        {
            mp[v]--;
            if(mp[v] == 0)
            {
                present--;
                while(!x.empty())
                {
                    int f = x.front();
                    x.pop();
                    window.push(f);
                    if(f <= k)
                    {
                        mp[f]++;
                        if(mp[f] == 1) present++;
                    }
                    if(present == k) break;
                }
            }
        }
        if(present != k) break;
    }
    if(ans == INT_MAX) ans = 0;
    cout<<ans<<nl;

}

int main()
{
    optimize();
    solve();
    return 0;
}
//         Alhamdulillah         //
