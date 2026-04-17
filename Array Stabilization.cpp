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
    vector<int> v(n);
    for(auto &u:v) cin>>u;
    if(n == 2) {cout<<0; return;}

    sort(v bb, v ee);
    int mn = *v.begin();
    int mx = v.back(); v.pop_back();
    cout<<min( *max_element(v bb, v ee) - mn, mx - v[1]);

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
