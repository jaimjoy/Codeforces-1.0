//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
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

//Yummy Function
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

int primes(int &n)
{
    int cnt=0;
    while(n%2 == 0) n /= 2, cnt++;
    while(n%3 == 0) n /= 3, cnt++;
    while(n%5 == 0) n /= 5, cnt++;
    return cnt;
}

void solve()
{
    int a,b;cin>>a>>b;
    if(a == b) {cout<<0; return;}
    int g = gcd(a,b);
    a /= g, b /= g;
    int x = primes(a);
    int y = primes(b);
    (a != 1 || b != 1) ? cout<<-1 : cout<<x+y;
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
