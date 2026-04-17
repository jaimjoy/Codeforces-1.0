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

/////////////////////////////Main////////////////////////////////

void solve()
{
    string s;cin>>s;
    int i=0, j=0, siz=s.size();
    int cnt=0;
    bool f=0;

    while(i<=siz && j<=siz)
    {
        if(s[i] == s[j])
        {
            j++;
            cnt++;
            if(cnt == 7) {f=1; break;}
        }
        else
        {
            i = j;
            cnt = 0;
        }
    }
    if(f) {YES;}
    else {NO;}
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
