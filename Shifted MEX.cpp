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
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    int mex=0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == mex) mex++;
        else if(v[i] > mex) break;
    }

    for(int i=0; i<n; i++)
    {
        int val = v[i] * -1;
        int mex2=0;
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int j=0; j<n; j++)
        {
            if(v[j]+val >= 0) pq.push(v[j]+val);
        }
        while(!pq.empty())
        {
            if(pq.top() == mex2) mex2++;
            else if(pq.top() > mex2) break;
            pq.pop();
        }
        mex = max(mex, mex2);
    }
    cout<<mex<<nl;
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