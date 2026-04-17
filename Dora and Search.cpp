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
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    priority_queue<int,vector<int>,greater<int>> choto;
    priority_queue<int> boro;
    for(int i=0; i<n; i++) choto.push(v[i]), boro.push(v[i]);

    int l=0, r=n-1;
    while(l<r)
    {
        int a = v[l];
        int b = v[r];
        if(a == boro.top() || a == choto.top()) 
        {
            l++;
            if(a == boro.top()) boro.pop();
            else choto.pop();
        }
        else if(b == boro.top() || b == choto.top()) 
        {
            r--;
            if(b == boro.top()) boro.pop();
            else choto.pop();
        }
        else {cout<<l+1<<' '<<r+1<<nl; return;}
    }
    cout<<-1<<nl;
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