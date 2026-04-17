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
    vi v(n),vv(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>vv[i];

    int neg=0, val, ind=-1;
    for(int i=0; i<n; i++)
    {
        if(v[i]-vv[i] < 0) neg++, val = min(val,v[i]-vv[i]), ind=i;
    }

    if(neg == 0) {YES;}
    else if(neg > 1) {NO;}
    else
    {
        for(int i=0; i<n; i++)
        {
            if(i != ind)
            {
                v[i] = val+v[i];
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i != ind && v[i] < vv[i]) {NO; return;}
        }
        YES;
    }

}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
