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
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    set<int> st;
    vector<int> mainArr(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].ff;
        v[i].ss = i;
        mainArr[i] = v[i].ff;
        st.insert(i);
    }
    sort(all(v));

    ll cost=0;
    for(auto u:v)
    {
        if(st.size() == 1) break;

        int curInd = u.ss;
        auto left = st.lower_bound(curInd);
        if(left == st.begin()) left = st.end();
        left--;

        auto right = st.upper_bound(curInd);
        if(right == st.end()) right = st.begin();

        ll L = *left, R = *right;
        cost += min(mainArr[L], mainArr[R]);

        st.erase(curInd);
    }
    cout<<cost<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //