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
    int n,q;cin>>n;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(mp[v[i]] == 0) mp[v[i]] = i+1;
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        int num;cin>>num;
        if(mp[num] != 0) {cout<<"Yes "<<mp[num]<<endl;}
        else
        {
            for(int i=0; i<n; i++)
            {
                if(v[i] > num) {cout<<"No "<<mp[v[i]]<<endl; break;}
            }
        }
    }

    return 0;
}
