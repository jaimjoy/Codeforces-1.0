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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    string res;
    deque<char> dc;
    if(n%2 == 0)
    {
        for(int i=0; i<n; i+=2)
        {
            dc.push_front(s[i]);
            dc.push_back(s[i+1]);
        }
    }
    else
    {
        for(int i=0; i<n-1; i+=2)
        {
            dc.push_back(s[i]);
            dc.push_front(s[i+1]);
        }
        dc.push_back(s[n-1]);
    }
    while(!dc.empty())
    {
        res += dc.front();
        dc.pop_front();
    }
    cout<<res;
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
