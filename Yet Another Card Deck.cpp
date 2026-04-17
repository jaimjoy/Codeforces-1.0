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
    int n,q,unq=0;cin>>n>>q;
    queue<int> q1;
    map<int,int> mp;
    for(int a,i=1; i<=n; i++)
    {
        cin>>a;
        if(mp[a] == 0) q1.push(a), mp[a] = i, unq++;
    }
    while(q--)
    {
        int k;cin>>k;
        cout<<mp[k]<<' ';
        mp[k] = 1;
        q1.push(k);
        int cnt=0;
        bool f=0;
        while(cnt<unq)
        {
            if(q1.front() == k) f=1;
            else if(!f) mp[q1.front()]++;

            if(q1.front() != k) q1.push(q1.front());

            q1.pop();
            cnt++;
        }
    }
}
 
int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();*/
    return 0;
}
//         Alhamdulillah         //