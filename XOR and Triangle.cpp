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
    int x;cin>>x;
    vi v;
    v.pb(1);
    int n=2;
    //Mersenne Prime are those whose all bits contains only with '1's
    // Ex:  1 = 1
    //      3 = 11
    //      7 = 111
    //     15 = 1111
    while(v.back() < x)
    {
        v.pb((1<<n) - 1);//Mersenne Prime
        n++;
    }
    for(int i=0; i<sz(v); i++)
    {
        int xorr = x^v[i];
        if(x+v[i] > xorr && v[i]+xorr > x && x+xorr > v[i]) {cout<<v[i]<<endl; return;}
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
