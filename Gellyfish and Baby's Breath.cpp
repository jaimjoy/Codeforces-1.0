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
const ll modkor = 998244353;
ll pre[100001];

void solve()
{
    int n;cin>>n;
    vi p(n), q(n), ans;
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>q[i];

    int pmx=0, qmx=0, pmx_ind=-1, qmx_ind=-1;
    for(int i=0; i<n; i++)
    {
        pmx = max(pmx, p[i]);
        qmx = max(qmx, q[i]);
        if(pmx == p[i]) pmx_ind = i;
        if(qmx == q[i]) qmx_ind = i;

        //(i-index) gives mirror index
        if(p[pmx_ind] > q[qmx_ind]) ans.pb(pre[p[pmx_ind]] + pre[q[i-pmx_ind]]);
        else if(p[pmx_ind] < q[qmx_ind]) ans.pb(pre[p[i-qmx_ind]] + pre[q[qmx_ind]]);
        else
        {
            if(p[i-qmx_ind] > q[i-pmx_ind]) ans.pb(pre[p[i-qmx_ind]] + pre[q[qmx_ind]]);
            else ans.pb(pre[p[pmx_ind]] + pre[q[i-pmx_ind]]);
        }
    }
    for(auto u:ans) cout<<u%modkor<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    pre[0] = 1;
    for(int i=1; i<=1e5; i++) pre[i] = (pre[i-1]*2) % modkor;
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
