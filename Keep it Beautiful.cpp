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
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int f=-1, l=-1;
    bool fn=0;
    for(int i=0; i<n; i++)
    {
        if(fn)
        {
            if(v[i] <= f && v[i] >= l)
            {
                l = v[i];
                cout<<1;
            }
            else cout<<0;
        }
        else
        {
            if(f == -1)
            {
                f = v[i];
                l = v[i];
                cout<<1;
            }
            else if(l <= v[i])
            {
                l = v[i];
                cout<<1;
            }
            else if(f >= v[i])
            {
                l = v[i];
                cout<<1;
                fn=1;
            }
            else cout<<0;
        }
    }
    cout<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
