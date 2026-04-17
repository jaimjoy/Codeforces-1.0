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
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    string s;cin>>s;
    string ans;
    int i=0;
    int WC=0;
    while(!s.empty())
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            WC++;
            if(!ans.empty() && WC == 1) ans += " ";
            s.erase(i,i+3);
        }
        else WC = 0, ans += s[i], s.erase(i,i+1);
    }
    cout<<ans;
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
