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
    string s, ans;cin>>s;
    vi v1,v2,f;
    for(int i=0; i<sz(s); i++)
    {
        if(s[i] != 'b' && s[i] != 'B')
        {
            if(s[i] <= 'Z') v1.pb(i);
            else v2.pb(i);
        }
        else
        {
            if(s[i] <= 'Z' && !v1.empty()) v1.pop_back();
            else if(s[i] > 'Z' && !v2.empty()) v2.pop_back();
        }
    }
    for(int i=0; i<sz(v1); i++) f.pb(v1[i]);
    for(int i=0; i<sz(v2); i++) f.pb(v2[i]);
    sort(all(f));
    for(int i=0; i<sz(f); i++) cout<<s[f[i]];

    cout<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
