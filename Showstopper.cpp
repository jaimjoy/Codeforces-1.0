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
    vector<int> a(n), b(n);
    for(auto &u:a) cin>>u;
    for(auto &u:b) cin>>u;
    for(int i=0; i<n; i++)
    {
        if(a[i] < b[i]) swap(a[i], b[i]);
    }
    int ai=0,bi=0;
    int am=INT_MIN,bm=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i] >= am) ai = max(ai, i), am = a[i];
        if(b[i] >= bm) bi = max(bi, i), bm = b[i];
    }
    --n;
    if(ai == n && bi == n) {YES;}
    else {NO;}
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
