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
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    // 01.03.2025
    mp[0] = 3;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[5] = 1;
    int cnt = 5;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]] > 0)
        {
            mp[v[i]]--;
            if(mp[v[i]] == 0) cnt--;
        }
        if(cnt == 0) {cout<<i+1<<endl; return;}
    }
    cout<<0<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
