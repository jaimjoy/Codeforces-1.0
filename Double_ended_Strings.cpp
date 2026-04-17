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
    string a,b;cin>>a>>b;
    if(a.size() < b.size()) swap(a,b);
    if(a == b) {cout<<0<<nl; return;}
 
    int ans=0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            int x=i, y=j, cons=0;
            while(x<a.size() && y<b.size() && a[x] == b[y])
            {
                x++;
                y++;
                cons++;
            }
            ans = max(ans, cons);
        }
    }
    cout<<a.size()+b.size()-ans*2<<nl;
}
 
int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //