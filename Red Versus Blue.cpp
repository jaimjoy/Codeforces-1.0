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
#define lcm(a,b) (a*b)/gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n,r,b;cin>>n>>r>>b;
    int gap;
    if(r%(b+1) == 0) gap = r/(b+1);
    else gap = r/(b+1) + 1;
    string s;
    for(int i=1; i<=r; i++)
    {
        s += 'R';
        if(b>0 && i%gap == 0) b--, s += 'B';
    }
    for(int i=0; i<sz(s)-1; i++)
    {
        cout<<s[i];
        if(s[i] == s[i+1] && b>0) b--, cout<<'B';
    }
    cout<<s[sz(s)-1]<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
