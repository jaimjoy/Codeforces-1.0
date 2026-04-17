//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    //More Optimized
    int n,m,k;cin>>n>>m>>k;
    map<int,int> am,bm;
    int cnta=0, cntb=0;
    for(int i=0,j; i<n; i++)
    {
        cin>>j;
        if(am[j] == 0 && j<=k) cnta++, am[j] = 1;
    }
    for(int i=0,j; i<m; i++)
    {
        cin>>j;
        if(bm[j] == 0 && j<=k) cntb++, bm[j] = 1;
    }
    if(cnta < k/2 || cntb < k/2) {NO; return;}

    for(int i=1; i<=k; i++)
    {
        if(am[i] == 0 && bm[i] == 0) {NO; return;}
    }
    YES;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
