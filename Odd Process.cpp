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
    vi v(n+1);
    deque<int> odd, even;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        if(v[i]&1) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }
    if(odd.empty())
    {
        for(int i=1; i<=n; i++) cout<<0<<' ';
        cout<<nl;
        return;
    }

    sort(allr(odd));
    sort(allr(even));
    ll cur=-1, ind=1, sum = odd.front();
    for(int k=1; k<=n; k++)
    {
        if(k == 1)
        {
            cout<<sum<<' ';
            continue;
        }
        if(!even.empty())
        {
            sum += even.front();
            cur = even.front();
            ind = k;
            even.pop_front();
            cout<<sum<<' ';
        }
        else
        {
            if((ind-k)%2 == 0) cout<<sum<<' ';
            else
            {
                if(cur == -1) cout<<0<<' ';
                else
                {
                    if(k != n) cout<<sum-cur<<' ';
                    else cout<<0<<' ';
                }
            }
        }
    }
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //