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
    int a,b,c,aa,bb,cc;cin>>a>>b>>c;
    aa = 2*b-c;
    bb = a+c;
    cc = 2*b-a;
    
    if(bb%(2*b) == 0) {YES;}//bb%2*b notEqual to bb%(2*b)
    else if(aa > 0 && aa%a == 0) {YES;}
    else if(cc > 0 && cc%c == 0) {YES;}
    else NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
