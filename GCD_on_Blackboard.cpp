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

void solve()
{
    int n;cin>>n;
    vi v(n+5), pregcd(n+5), sufgcd(n+5);
    for(int i=1; i<=n; i++) cin>>v[i];
    
    //Prefix & Suffix GCD
    pregcd[0] = 0;
    sufgcd[n+1] = 0;
    for(int i=1; i<=n; i++) pregcd[i] = gcd(pregcd[i-1], v[i]); 
    for(int i=n; i>0; i--) sufgcd[i] = gcd(sufgcd[i+1], v[i]);

    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans = max(ans, gcd(pregcd[i-1], sufgcd[i+1]));
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();*/
    return 0;
}
//            Alhamdulillah                //
