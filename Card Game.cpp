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
    map<char,string> m;
    m['A'] = "Alice";
    m['B'] = "Bob";
    if(n == 2 || s[0] == s[n-1]) {cout<<m[s[0]]<<endl; return;}

    if(s[0] == 'A')
    {
        for(int i=1; i<n-1; i++)
        {
            if(s[i] == 'B') {cout<<"Bob"<<endl; return;}
        }
        cout<<"Alice"<<endl;
    }
    else if(s[n-2] == 'A') cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
