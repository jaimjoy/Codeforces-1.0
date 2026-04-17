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

void solve()
{
    int a,b;cin>>a>>b;
    string s,t;cin>>s>>t;
    bool tower1=0, tower2=0;
    for(int i=0; i<a-1; i++) if(s[i] == s[i+1]) {tower1=1; break;}
    for(int i=0; i<b-1; i++) if(t[i] == t[i+1]) {tower2=1; break;}

    if(tower1 && tower2) {NO;}
    else if(!tower1 && !tower2) {YES;}
    else if(tower2)
    {
        while(!t.empty())
        {
            if(s.back() != t.back()) s += t.back(), t.pop_back();
            else break;
        }
        bool ok=0, okk=0;
        for(int i=0; i<s.size()-1; i++) if(s[i] == s[i+1]) {ok=1; break;}
        for(int i=0; i<t.size()-1; i++) if(t[i] == t[i+1]) {okk=1; break;}

        if(ok || okk) {NO;}
        else {YES;}
    }
    else
    {
        while(!s.empty())
        {
            if(s.back() != t.back()) t += s.back(), s.pop_back();
            else break;
        }
        bool ok=0, okk=0;
        for(int i=0; i<s.size()-1; i++) if(s[i] == s[i+1]) {ok=1; break;}
        for(int i=0; i<t.size()-1; i++) if(t[i] == t[i+1]) {okk=1; break;}

        if(ok || okk) {NO;}
        else {YES;}
    }
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //
