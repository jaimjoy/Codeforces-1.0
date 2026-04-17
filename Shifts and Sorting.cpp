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
    string s;cin>>s;
    ll ans=0;
    int lastz=0;
    for(int i=0; i<sz(s); i++)
    {
        if(s[i] == '1')
        {
            auto it = find(s.begin()+max(i, lastz), s.end(), '0');
            if(it != s.end())
            {
                ans += (it-s.begin()+1) - i;
                swap(s[i], s[it-s.begin()]);
                lastz = it-s.begin()+1;
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
