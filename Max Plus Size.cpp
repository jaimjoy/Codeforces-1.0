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
    int n;cin>>n;
    int a=INT_MIN,b=INT_MIN,aC=0,bC=0;
    for(int i=0; i<n; i++)
    {
        int v;cin>>v;
        if(i%2 == 0)
        {
            a = max(v,a);
            aC++;
        }
        else
        {
            b = max(v,b);
            bC++;
        }
    }
    int ans = a+aC;
    int ans2 = b+bC;
    if(ans>ans2) cout<<ans<<endl;
    else cout<<ans2<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //
