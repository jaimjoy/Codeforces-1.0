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
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll op=0;
    for(int i=n-1; i>0; i--)
    {
        if(v[i-1] >= v[i])
        {
            while(v[i-1] >= v[i])
            {
                if(v[i-1] == 0) break;
                v[i-1]/=2;
                op++;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i] == v[i+1]) {cout<<-1<<nl; return;}
    }
    cout<<op<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
