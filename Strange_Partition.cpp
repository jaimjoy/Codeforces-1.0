//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
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

void solve()
{
    int n,x;cin>>n>>x;
    ll sum=0, mn=0, mx=0;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        sum += a;
        if(a == 1) mx++;
        else if(a%x == 0) mx += a/x;
        else mx += (a+x)/x;
    }
    mn = sum/x;
    if(sum%x) mn++;
 
    cout<<mn<<' '<<mx<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
