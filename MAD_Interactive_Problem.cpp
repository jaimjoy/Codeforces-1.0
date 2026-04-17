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

int query(vector<int> &v, int choose)
{
    cout<<"? "<<v.size()<<' ';
    if(choose == 1) for(auto &u:v) cout<<u<<' ';
    else
    for(int i=v.size()-1; i>=0; i--) cout<<v[i]<<' ';
    cout<<endl;

    int x;cin>>x;
    return x;
}
void solve()
{
    int n;cin>>n;
    n *= 2;

    vector<int> ans(n+1, -1);
    vector<int> index;
    for(int i=1; i<=n; i++)
    {
        index.pb(i);
        int num = query(index, 1);
        if(num > 0) ans[i] = num, index.pop_back();
    }

    index.clear();
    for(int i=n; i>0; i--)
    {
        index.pb(i);
        if(ans[i] == -1)
        {
            int num = query(index, 2);
            if(num > 0) ans[i] = num, index.pop_back();
        }
    }

    cout<<"! ";
    for(int i=1; i<=n; i++) cout<<ans[i]<<' ';
    cout<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
