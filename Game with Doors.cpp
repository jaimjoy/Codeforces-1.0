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
    int l,r,L,R;cin>>l>>r>>L>>R;
    map<int,int> main;
    vector<pair<int,int>> vp;
    vp.pb({l,r});
    vp.pb({L,R});
    sort(all(vp));
    l = vp[0].ff;
    r = vp[0].ss;
    L = vp[1].ff;
    R = vp[1].ss;

    int cnt = 0;
    if(r < L) cnt = 1;
    else if(r >= R)
    {
        cnt = R-L+2;
        if(l == L) cnt--;
        if(r == R) cnt--;
    }
    else
    {
        cnt = r-L+2;
        if(l == L) cnt--;
        if(r == R) cnt--;
    }
    cout<<cnt<<endl;

}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
