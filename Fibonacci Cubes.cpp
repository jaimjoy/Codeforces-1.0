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

vector<int> v(11);

void solve()
{
    int n,m;cin>>n>>m;
    int a = v[n], b = v[n-1];
    while(m--)
    {
        int w,l,h;cin>>w>>l>>h;
        if(min({w,l,h}) < a) cout<<0;
        else
        {
            int temp = max({w,l,h}) - a;
            temp -= b;
            if(temp < 0) cout<<0;
            else cout<<1;
        }
    }
    cout<<endl;
}

int main()
{
    optimize();
    v[1] = 1;
    v[2] = 2;
    for(int i=3; i<=10; i++) v[i] = v[i-1] + v[i-2];

    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
