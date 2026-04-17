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
#define yes {cout<<"Yes"<<endl;}
#define no  {cout<<"No"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vi v(n);
    bool f=0;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-1; i++)
    {
        if(abs(v[i]-v[i+1]) <= 1) {cout<<0<<endl; return;}
    }

    for(int i=0; i<n-2; i++)
    {
        int a,b;
        a = v[i];
        b = v[i+1];
        if(a>b) swap(a,b);
        if(a <= v[i+2] && b >= v[i+2]) {cout<<1<<endl; return;}
        if(abs(a - v[i+2]) <= 1 || abs(b - v[i+2]) <= 1) {cout<<1<<endl; return;}
    }

    for(int i=n-1; i>1; i--)
    {
        int a,b;
        a = v[i];
        b = v[i-1];
        if(a>b) swap(a,b);
        if(a <= v[i-2] && b >= v[i-2]) {cout<<1<<endl; return;}
        if(abs(a - v[i-2]) <= 1 || abs(b - v[i-2]) <= 1) {cout<<1<<endl; return;}
    }

    cout<<-1<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
