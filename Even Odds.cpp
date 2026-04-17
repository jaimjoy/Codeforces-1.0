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

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    ll a,k;cin>>a>>k;
    if(a%2 == 0)
    {
        ll tmp = a/2;
        if(tmp >= k)
        {
            ll t = -1;
            for(ll i=1; i<=k; i++) t += 2;
            cout<<t;
        }
        else
        {
            ll t = 0;
            for(ll i=tmp+1; i<=k; i++) t += 2;
            cout<<t;
        }
    }
    else
    {
        ll tmp = a/2+1;
        if(tmp >= k)
        {
            ll t = -1;
            for(ll i=1; i<=k; i++) t += 2;
            cout<<t;
        }
        else
        {
            ll t = 0;
            for(ll i=tmp+1; i<=k; i++) t += 2;
            cout<<t;
        }
    }
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //
