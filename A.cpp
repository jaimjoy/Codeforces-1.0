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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n;cin>>n;
    string a,b;cin>>a>>b;

    vector<bool> canflip(n);
    int cnt0=0, cnt1=0;
    for(int i=0; i<n; i++)
    {
        (a[i] == '1') ? cnt1++ : cnt0++;
        if(cnt0 == cnt1) canflip[i] = true;
    }

    bool isFliped = false;//false=even : true=odd
    bool res = true;
    for(int i=n-1; i>=0; i--)
    {
        if(!isFliped)
        {
            if(a[i] != b[i]) 
            {
                if(canflip[i]) isFliped ^= true;
                else {res = false; break;}
            }
        }
        else
        {
            if(a[i] == b[i]) 
            {
                if(canflip[i]) isFliped ^= true;
                else {res = false; break;}
            }
        }
    }
    if(res) YES;
    else NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //