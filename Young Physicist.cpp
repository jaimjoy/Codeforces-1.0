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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

const int mx = 2e5+123;
vector<long long> a(mx);

int x = 0;
int y = 0;
int z = 0;
void solve()
{
    int a,b,c;cin>>a>>b>>c;
    x += a;
    y += b;
    z += c;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--) solve();
    if(x == 0 && y == 0 && z == 0) {YES;}
    else {NO;}

    return 0;
}
//            Alhamdulillah                //
