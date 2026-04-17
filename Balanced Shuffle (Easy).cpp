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

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if(p1.ff < p2.ff) return 0;
    else if(p1.ff == p2.ff) return(p1.ss < p2.ss);
    return 1;
}
void solve()
{
    string s;cin>>s;
    int siz = s.size();
    map<pair<int, int>, char> m;
    vector<pair<int, int>> v;
    vector<int> open(siz+1, 0), close(siz+1, 0);
    for(int i=1; i<=siz; i++)
    {
        open[i] = open[i-1] + (s[i-1] == '(' ? 1 : 0);
        close[i] = close[i-1] + (s[i-1] == ')' ? 1 : 0);
    }
    for(int i=0; i<siz; i++)
    {
        int l = open[siz] - open[i];
        int r = close[siz] - close[i];
        int diff = abs(r-l);
        v.pb({diff, i+1});
        m[{diff, i+1}] = s[i];
    }
    sort(v rb, v re, cmp);
    for(int i=0; i<siz; i++) cout<<m[v[i]];
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
