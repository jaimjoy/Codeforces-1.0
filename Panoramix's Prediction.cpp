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

const int mx = 2e5+123;
int a[14] = {2,3,5,7};
vector<ll> r;

void solve()
{
    int aa,b;cin>>aa>>b;
    int sto=-1;
    for(int i=0; i<14; i++)
    {
        if(aa == a[i])
        {
            sto = i;
            break;
        }
    }
    sto++;
    if(b == a[sto]) {YES;}
    else {NO;}
}

int main()
{
    optimize();
    int c = 4;
    for(int i=8; i<50; i++)
    {
        if(i%2 && i%3 && i%5 && i%7)
        {
            a[c] = i;
            c++;
        }
    }
    solve();

    return 0;
}
//            Alhamdulillah                //
