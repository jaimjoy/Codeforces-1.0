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
    int a;cin>>a;
    map<int, int> m;
    for(int i=1; i<=a; i++)
    {
        int t;cin>>t;
        m[t] = i;
    }

    int b;cin>>b;
    ll vas=0, pet=0;
    while(b--)
    {
        int t;cin>>t;
        int indx = m[t];
        vas += indx;
        pet += a-indx+1;
    }
    cout<<vas<<" "<<pet;
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
