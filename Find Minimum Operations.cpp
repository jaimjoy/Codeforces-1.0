//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
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

ll largestPower(int n, int k)
{
    ll temp = 1;
    while(temp*k <= n) temp *= k;
    return temp;
}

void solve()
{
    ll n,k;cin>>n>>k;
    ll cnt=0;
    if(k == 1) {cout<<n<<endl; return;}
    while(n>=k) n -= largestPower(n,k), cnt++;
    cout<<cnt+n<<endl;
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
