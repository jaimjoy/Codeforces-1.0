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
    while(tc--)
    {
        /*Map will only count the occurred
               characters so I used
                  Vector as Map...         */
        int n,m;cin>>n>>m;
        vector<int> v(7,0);
        int res=0;
        for(int i=0; i<n; i++)
        {
            char c;cin>>c;
            v[c-'A']++;
        }
        for(auto &u:v)
        {
            if(u<m) res += m-u;
        }
        cout<<res<<endl;
    }
    return 0;
}
//            Alhamdulillah                //
