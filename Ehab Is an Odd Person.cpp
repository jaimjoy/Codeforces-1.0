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
    int even=0, odd=0;
    vector<int> v(tc);
    for(int i=0; i<tc; i++)
    {
        cin>>v[i];
        if(v[i]%2 == 0) even++;
        else odd++;
    }
    if(even>0 && odd>0) sort(v bb, v ee);
    for(auto u:v) cout<<u<<" ";
    return 0;
}
//            Alhamdulillah                //
