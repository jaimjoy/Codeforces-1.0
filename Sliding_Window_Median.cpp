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

multiset<int> ms1, ms2;
void balance()
{
    int siz = sz(ms1)+sz(ms2);
    int a = (siz+1)/2;
    int b = siz-a;

    while(sz(ms1) > a)
    {
        int e = *ms1.rbegin();
        ms2.insert(e);
        ms1.erase(ms1.find(e));
    }
    while(sz(ms2) > b)
    {
        int e = *ms2.begin();
        ms1.insert(e);
        ms2.erase(ms2.find(e));
    }
}
void add(int v)
{
    if(ms1.empty()) ms1.insert(v); 
    else
    {
        int mx = *ms1.rbegin();
        if(v < mx) ms1.insert(v);
        else ms2.insert(v);
    }
    balance();
}
void remove(int v)
{
    if(ms1.find(v) != ms1.end()) ms1.erase(ms1.find(v));
    else ms2.erase(ms2.find(v));
    balance();
}

void solve()
{
    int n,k;cin>>n>>k;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<k; i++) add(v[i]);

    for(int i=0; i<=n-k; i++)
    {
        cout<<*ms1.rbegin()<<' ';
        remove(v[i]);
        add(v[i+k]);
    }
}

int main()
{
    optimize();
    solve();
    return 0;
}
//         Alhamdulillah         //
