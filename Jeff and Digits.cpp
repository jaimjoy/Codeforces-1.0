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
    int n;cin>>n;
    int five=0,zero=0,mfive=0;
    while(n--)
    {
        int a;cin>>a;
        if(a == 5) five++;
        else zero++;
        if((five*5)%9 == 0) mfive = five;
    }
    if(mfive != 0 && zero>0)
    {
        for(int i=0; i<mfive; i++) cout<<"5";
        for(int i=0; i<zero; i++) cout<<"0";
    }
    else if(zero > 0) cout<<"0";
    else cout<<-1;
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
