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
    ll n,k;cin>>n>>k;
    ll temp = n+k-1;
    ll temp2 = (k*(k-1)/2);
    ll sum = (temp*(temp+1)/2) - temp2;
    ll l = k, r = temp;
    ll res = LLONG_MAX;

    while(l<=r)
    {
        ll mid = (l+r)/2;
        ll sum1 = (mid*(mid+1)/2) - temp2;
        ll sum2 = sum - sum1;
        res = min(abs(sum1-sum2), res);

        if(sum1 < sum2) l = mid+1;
        else r = mid-1;
    }
    cout<<res<<endl;
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
