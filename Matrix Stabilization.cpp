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
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int n,m;cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m)), ans(n, vector<int> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>v[i][j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            priority_queue<int> p;
            bool y=0;
            if(j-1 >= 0) p.push(v[i][j-1]);
            if(j+1 < m) p.push(v[i][j+1]);
            if(i-1 >= 0) p.push(v[i-1][j]);
            if(i+1 < n) p.push(v[i+1][j]);
            int mx = p.top();
            while(!p.empty())
            {
                if(p.top() > v[i][j]) {y=1; break;}
                p.pop();
            }
            if(!y) ans[i][j] = mx;
            else ans[i][j] = v[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
