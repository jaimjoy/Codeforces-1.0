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

void solve()
{
    int n,k;cin>>n>>k;
    ll sum=0;
    priority_queue<int> pq;
    int mn=INT_MAX, mx=INT_MIN;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        sum += a;
        pq.push(a);
        mn = min(mn, a);
        mx = max(mx, a);
    }
    int temp = mx;
    temp--;
    pq.pop();
    pq.push(temp);

    if(mx-(mn-1) <= k || pq.top()-mn <= k)
    {
        if(sum&1) cout<<"Tom"<<endl;
        else cout<<"Jerry"<<endl;
    }
    else cout<<"Jerry"<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
