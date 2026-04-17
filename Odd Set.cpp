//                     By the name of Allah                           //
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--)
    {
        int a;cin>>a;
        int even=0,odd=0;
        for(int i=0; i<2*a; i++)
        {
            int g;cin>>g;
            if(g%2 == 0) even++;
            else odd++;
        }
        if(even == odd) { YES; }
        else { NO; }
    }
    return 0;
}
//            Alhamdulillah                //
