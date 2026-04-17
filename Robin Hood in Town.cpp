//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second
#define bb      .begin()
#define ee      .end()
#define rb      .rbegin()
#define re      .rend()
#define ll      long long

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

/////////////////////////////Main////////////////////////////////

void solve()
{
    ll n;cin>>n;
    vector<ll> v(n);
    ll sum=0;
    ll indx=0;
    ll mx=LLONG_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
        if(v[i] > mx)
        {
            mx = v[i];
            indx = i;
        }
    }
    ll limit = n/2;
    ll l=0;
    ll r = 1e18;
    ll ans = -1;
    while(l <= r)
    {
        ll mid = (l+r)/2;
        v[indx] += mid;
        ll val = sum+mid;
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]*(2 * n) < val) cnt++;
        }

        if(cnt > limit)
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;

        v[indx] -= mid;
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //
