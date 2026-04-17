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
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int n;cin>>n;
    vi one, two;
    while(n--)
    {
        int m;cin>>m;
        int mn=INT_MAX, mnn=INT_MAX;
        for(ll i=0,a; i<m; i++)
        {
            cin>>a;
            if(mn>a) mnn = mn, mn = a;
            else if(a<mnn) mnn = a;
        }
        one.pb(mn);
        two.pb(mnn);
    }
    sort(all(one));
    sort(all(two));
    swap(one[0],two[0]);
    ll ans = accumulate(all(two),0LL);
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
