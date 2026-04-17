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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n;
    string s;cin>>n>>s;
    string t = s;
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        char c = s[i];
        if(s[i] == '1') s[i] = '0';
        else s[i] = '1';
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1') cnt++;
        }
        s[i] = c;
    }
    cout<<cnt<<endl;
}

int main()
{
    optimize();
    //solve();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
