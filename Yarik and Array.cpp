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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n;cin>>n;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll ans=v[0];
    int ocnt=0, ecnt=0;
    vl temp;
    for(int i=0; i<n; i++)
    {
        ans = max(ans, v[i]);
        bool f=0;
        if(v[i]%2 && ocnt == 0)
        {
            temp.pb(v[i]);
            ocnt=1;
            ecnt=0;
            f=1;
        }
        if(v[i]%2 == 0 && ecnt == 0)
        {
            temp.pb(v[i]);
            ocnt=0;
            ecnt=1;
            f=1;
        }
        //Kadane's Algorithm
        if(!f || i == n-1)
        {
            ll curr = temp[0], best = temp[0];
            for(int j=1; j<temp.size(); j++)
            {
                curr = max(temp[j], curr+temp[j]);
                best = max(best, curr);
            }
            ans = max(ans, best);
            temp.clear();
            temp.pb(v[i]);
        }
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
