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
    int n,m;cin>>n>>m;
    vector<int> buy(n);

    int neg=0;
    for(int i=0; i<n; i++)
    {
        cin>>buy[i];
        if(buy[i]<0) neg++;
    }

    int mm = m;
    if(neg < mm && neg > 0) mm = neg;
    else if(neg == 0) mm = 0;
    sort(buy bb, buy ee);

    ll res=0;
    for(int i=0; i<mm; i++) res -= buy[i];
    cout<<res;
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
