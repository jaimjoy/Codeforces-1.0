//                     By the name of Allah                           //
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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

int main()
{
    optimize();
    int tc;cin>>tc;
    vector<char> v(tc);
    for(int i=0; i<tc; i++) cin>>v[i];
    int t=0,a=0;
    if(tc<3) cout<<v[0];
    else
    {
        for(auto &u:v)
        {
            if(u == 'A') a++;
            else t++;
        }
        if(t>a) cout<<"T";
        else if(t == a && v[tc-1]=='A') cout<<"T";
        else cout<<"A";
    }
    return 0;
}
//            Alhamdulillah                //
