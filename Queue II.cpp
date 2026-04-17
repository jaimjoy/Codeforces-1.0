#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n,q;cin>>n>>q;
    vector<queue<int>> v(n);
    for(int i=1; i<=q; i++)
    {
        int a;cin>>a;
        if(a==0)
        {
            int t,x;cin>>t>>x;
            v[t].push(x);
        }
        else if(a==1)
        {
            int t;cin>>t;
            if(!v[t].empty()) cout<<v[t].front()<<endl;
        }
        else
        {
            int x;cin>>x;
            if(!v[x].empty()) v[x].pop();
        }
    }

    return 0;
}
