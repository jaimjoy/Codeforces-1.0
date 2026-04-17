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
    string s = "aeiou";
    int n;cin>>n;
    int temp = n/5;
    vector<char> v;
    for(int i=0; i<temp; i++)
    {
        for(int j=0; j<5; j++) v.pb(s[j]);
    }

    int left = n%5;
    for(int i=0; i<left; i++) v.pb(s[i]);
    sort(v bb, v ee);
    for(auto u:v) cout<<u;
    cout<<endl;
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
