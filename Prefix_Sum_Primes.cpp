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

vector<bool> sieve(int n)
{
    vector<bool> prime(n+1, true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
void solve()
{
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]]++;

    vector<bool> check = sieve(mp[1]+mp[2]*2);
    ll sum=0;
    vector<int> ans;
    while(1)
    {
        if(mp[1] == 0 && mp[2] == 0) break;

        if(sum == 0)
        {
            sum = (mp[2]) ? 2:1;//initial
            ans.pb(sum);
            mp[sum]--;
        }
        else if(mp[1] > 0) 
        {
            if(check[sum+1]) ans.pb(1), sum++, mp[1]--;
            else if(mp[2] > 0) ans.pb(2), sum+=2, mp[2]--;
            else ans.pb(1),sum++, mp[1]--;
        }
        else if(mp[2] > 0)
        {
            if(check[sum+2]) ans.pb(2), sum+=2, mp[2]--;
            else if(mp[1] > 0) ans.pb(1), sum++, mp[1]--;
            else ans.pb(2), sum+=2, mp[2]--;
        }
    }
    for(auto u:ans) cout<<u<<' ';
}

int main()
{
    optimize();
    solve();
    //ll tc;cin>>tc;
    //for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
