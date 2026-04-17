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
    ll n;cin>>n;
    vector<ll> v;
    map<ll, ll> m;
    ll sum=0;
    ll MAD = 0;
    for(int i=0; i<n; i++)
    {
        ll u;cin>>u;
        m[u]++;
        sum += u;
        if(m[u] > 1) MAD = max(MAD, u);
        v.pb(MAD);
    }

    ll prev = 0;
    m.clear();
    for(int i=0; i<n; i++) m[v[i]]++;

    for(int i=0; i<n; i++)
    {
        if(v[i] != 0)
        {
            sum += v[i];
            if(m[v[i]] == 1) sum += (n-i-1) * prev;
            else sum += (n-i-1) * v[i], prev = v[i];
        }
    }
    cout<<sum<<endl;
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
