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
    ll n,k;cin>>n>>k;// 3 2
    ll start = n-k+1;// 2
    ll endd = n;// 3
    ll len = endd-start+1;//2

    if(start%2 == 0)
    {
        if(len == 1 || (len/2)%2 == 0) {YES;}
        else {NO;}
    }
    else
    {
        if(len > 1 && ((len+1)/2)%2 == 0) {YES;}
        else {NO;}
    }
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
