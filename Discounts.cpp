//  In the name of Almighty Allah
//     One day I'll be no more,
//        but my code will !
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree < T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree < T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ook order_of_key
#define fbo find_by_order
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
 
void solve()
{
    int n,k;cin>>n>>k;
    priority_queue<int> pq;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        pq.push(a);
    }
 
    vi cost(k);
    ll sum=0;
    for(int i=0; i<k; i++) cin>>cost[i], sum+=cost[i];
    sort(all(cost));
 
    int j=0;
    ll ans=0;
    while(!pq.empty() && j<k)
    {
        int c = cost[j];
        for(int i=0; i<c-1 && !pq.empty(); i++)
        {
            ans += pq.top();
            pq.pop();
        }
        if(!pq.empty()) pq.pop();
        j++;
    }
    while(!pq.empty()) ans+=pq.top(), pq.pop();
    cout<<ans<<nl;
}
 
int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //