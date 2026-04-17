//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl    '\n'
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

int main()
{
    optimize();
    int tc;cin>>tc;
    char c;
    int cnt=0;
    for(int i=0; i<tc; i++)
    {
        char a,b;cin>>a>>b;
        if(a != c) cnt++;
        c = a;
    }
    cout<<cnt;

    return 0;
}
//            Alhamdulillah                //
