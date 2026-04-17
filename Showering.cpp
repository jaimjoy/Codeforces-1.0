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
        int n,s,m;cin>>n>>s>>m;
        vector<pair<int, int>> v;
        v.pb({0,0});
        while(n--)
        {
            int a,b;cin>>a>>b;
            v.pb({a,b});
        }
        v.pb({m,0});
        bool f=0;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i].ff - v[i-1].ss >= s)
                {
                    f = 1;
                    break;
                }
        }
        if(f) {YES;}
        else {NO;}
    }
    return 0;
}
//            Alhamdulillah                //
