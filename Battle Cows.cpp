//  In the name of Almighty Allah

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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n,k;cin>>n>>k;
    k--;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans1=0, ans2=0, ind=-1;
    //comparing with kth value
    swap(v[0], v[k]);
    for(int i=1; i<n; i++)
    {
        if(v[0] > v[i]) ans1++;
        else {ind=i; break;}
    }

    if(ind != -1)
    {
        swap(v[0], v[k]);//Making the vector normal
        // v[ind] = boro value
        swap(v[k], v[ind]);
        int mx = INT_MIN;
        for(int i=0; i<ind; i++)
        {
            mx = max(mx, v[i]);
        }
        if(mx > v[ind]) {cout<<ans1<<nl; return;}

        if(ind > 0) ans2++;
        for(int i=ind+1; i<n; i++)
        {
            if(v[i] < v[ind]) ans2++;
            else break;
        }
        ans1 = max(ans1, ans2);
    }
    cout<<ans1<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //