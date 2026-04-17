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
    int n,a,b;cin>>n>>a>>b;
    vi v(n,0);
    map<int,int> mp;
    mp[a]++;
    mp[b]++;
    v[0] = a;
    v[n-1] = b;
    int ii=1, jj=n/2, ac=n, bc=1, cnt=0;
    while(true)
    {
        if(mp[ac] == 0 && ac > 0)
        {
            v[ii] = ac;
            ii++;
            mp[ac]++;
            cnt++;
        }
        ac--;
        if(ac < a || cnt == ((n/2)-1)) break;
    }

    cnt=0;
    while(true)
    {
        if(mp[bc] == 0 && bc <= n)
        {
            v[jj] = bc;
            jj++;
            mp[bc]++;
            cnt++;
        }
        bc++;
        if(bc > b || cnt == ((n/2)-1)) break;
    }

    for(int i=0; i<n; i++)
    {
       if(v[i] == 0) {cout<<-1<<endl; return;}
    }

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
