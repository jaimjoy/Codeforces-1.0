//  In the name of Almighty Allah

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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

string decToBinary(ll n)
{
    string s="";
    ll i=0;
    while(n>0)
    {
        s = to_string(n%2)+s;
        n /= 2;
        i++;
    }
    return s;
}
void solve()
{
    ll a,b;cin>>a>>b;
    if(a == b) {cout<<0<<nl; return;}

    //      divide
    //2 : right shift by 1
    //4 : right shift by 2
    //8 : right shift by 3

    //      multiply
    //2 : left shift by 1
    //4 : left shift by 2
    //8: left shift by 3
    string sa = decToBinary(a);
    string sb = decToBinary(b);
    
    ll cnt1=0, cnt2=0;
    while(sa.back() == '0') sa.pop_back(), cnt1++;
    while(sb.back() == '0') sb.pop_back(), cnt2++;
    if(sa != sb) {cout<<-1<<nl; return;}
    
    ll k = max(cnt1,cnt2)-min(cnt1,cnt2), ans=0;
    if(k == 1) ans = 1;
    else
    {
        ans += k/3;
        k -= (k/3)*3;
        if(k == 1) ans++;
        else ans += k/2;
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
