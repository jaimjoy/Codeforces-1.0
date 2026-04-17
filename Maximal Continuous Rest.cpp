//                                By the name of Allah                           //
#include<bits/stdc++.h>
#include<set>
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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

int main()
{
    optimize();
    int tc;cin>>tc;
    int ar[tc];
    int t=0;
    int res=0;
    for(int i=0; i<tc; i++) cin>>ar[i];
    for(int i=0; i<tc; i++)
    {
        if(ar[i] == 1)
        {
            t++;
            res = max(res,t);
        }
        else t=0;
    }
    for(int i=0; i<tc; i++)
    {
        if(ar[i] == 1)
        {
            t++;
            res = max(res,t);
        }
        else t=0;
    }
    cout<<res;
    return 0;
}
//            Alhamdulillah                //
