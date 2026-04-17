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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    ll n,d;cin>>n>>d;
    cout<<"1 ";
    if(n>=3 || d%3 == 0) cout<<"3 ";
    if(d%5 == 0) cout<<"5 ";
    if(n>=3 || d%7 == 0) cout<<"7 ";
    if(n>=6 || d%9 == 0) cout<<"9 ";
    else
    {
        ll a = 1;
        for(int i=1; i<=n; i++) a*=i;
        a*=d;
        if(a%9 == 0) cout<<"9 ";
    }
    cout<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
