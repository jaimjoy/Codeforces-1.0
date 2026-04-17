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
    int n,k;cin>>n>>k;
    vi v(n);
    ll m = 1;
    int ev=0, mn=6;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2 == 0) ev++;
        if(v[i]%k == 0) m = 0;
        mn = min(mn, k - v[i]%k);
    }
    if(m == 0) {cout<<0<<endl; return;}

    if(k == 4)//two even needed (2*2 = 4)
    {
        if(ev == 0) cout<<min(mn, 2)<<endl;
        else if(ev == 1) cout<<1<<endl;
        else cout<<0<<endl;
    }
    else cout<<mn<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
