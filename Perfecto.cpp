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

bool sq(ll n)
{
    if(ceil(sqrtl(n)) == floor(sqrtl(n))) return 1;
    return 0;
}
void solve()
{
    ll n;cin>>n;
    ll allsum = (n*(n+1))/2;
    if(sq(allsum)) {cout<<-1<<endl; return;}

    vl ans, pre(n);
    ll ptr=0, sum=0;
    for(int i=0; i<n; i++) pre[i] = i+1;
    for(int i=0; i<n; i++)
    {
        if(sq(sum+pre[ptr]))
        {
            ans.pb(pre[ptr+1]);
            pre[ptr+1] = pre[ptr];
        }
        else ans.pb(pre[ptr]);
        ptr++;
        sum += ans.back();
    }
    for(auto u:ans) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
