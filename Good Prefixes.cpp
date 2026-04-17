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

//Yummy Function
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n, cnt=0;cin>>n;
    vector<int> v(n);
    vector<ll> presum(n+1,0);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=1; i<=n; i++) presum[i] = presum[i-1]+v[i-1];

    int mx = v[0];
    for(int i=0; i<n; i++)
    {
        if(i>0) mx = max(v[i], mx);
        if(presum[i+1] - mx == mx) cnt++;
    }
    cout<<cnt<<endl;
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
