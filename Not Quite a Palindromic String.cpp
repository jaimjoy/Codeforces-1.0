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
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve(int test)
{
    int n,k;
    string s;cin>>n>>k>>s;
    int one=0, z=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0') z++;
        else one++;
    }
    int var = abs(one-z)/2;
    for(int i=var; i<=n; i+=2)
    {
        if(i == k) {yes; return;}
    }
    no;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve(d);

    return 0;
}
//            Alhamdulillah                //
