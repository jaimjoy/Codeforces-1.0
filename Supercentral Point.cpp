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
    int n;cin>>n;
    vector<pair<int, int>> v(n);
    for(auto &u:v) cin>>u.ff>>u.ss;
    int res=0;
    for(int i=0; i<n; i++)
    {
        int x = v[i].ff, y = v[i].ss;
        bool l=0, r=0, u=0, d=0;
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                if(v[j].ff == x)
                {
                    if(v[j].ss > y) u=1;
                    else if(v[j].ss < y) d=1;
                }
                if(v[j].ss == y)
                {
                    if(v[j].ff > x) r=1;
                    else if(v[j].ff < x) l=1;
                }
            }
        }
        if(l && r && u && d) res++;
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
