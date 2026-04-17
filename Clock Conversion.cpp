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

const int mx = 1e9+123;

void solve()
{
    string s;cin>>s;
    string am = " AM";
    string pm = " PM";
    string ss;
    ss += s[0];
    ss += s[1];
    int n = stoi(ss);

    if(n > 00 && n < 12) cout<<s<<am<<endl;
    else if(n == 12) cout<<s<<pm<<endl;
    else if(n == 00)
    {
        s.erase(0,2);
        string res = "12";
        cout<<res<<s<<am<<endl;
    }
    else
    {
        s.erase(0,2);
        int temp = abs(n-12);
        if(temp < 10)
        {
            string f = to_string(temp);
            cout<<"0"<<f<<s<<pm<<endl;
        }
        else
        {
            string f = to_string(temp);
            cout<<f<<s<<pm<<endl;
        }
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
