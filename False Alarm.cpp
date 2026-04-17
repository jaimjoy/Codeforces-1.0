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

void solve()
{
    int n,x;cin>>n>>x;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ind=-100;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 1) {ind = i+x; break;}
    }
    if(ind == -100) {YES;}
    else
    {
        for(int i=ind; i<n; i++) {if(v[i] == 1) {NO; return;}}
        YES;
    }
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
