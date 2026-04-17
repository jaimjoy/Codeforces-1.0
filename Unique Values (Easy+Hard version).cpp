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

int query(vector<int> v)
{
    cout<<"? ";
    cout<<v.size()<<' ';
    for(int i=0; i<v.size(); i++) cout<<v[i]<<' ';
    cout<<endl;
    int cnt;cin>>cnt;
    return cnt;
}
void solve()
{
    int n;cin>>n;

    //last index
    int l=3, r=2*n + 1;
    int first, last, middle;
    while(l<=r)
    {
        int mid = (l+r)/2;
        vector<int> temp;
        for(int i=1; i<=mid; i++) temp.pb(i);

        int val = query(temp);
        if((temp.size()-val) & 1)
        {
            last = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    //first index
    l=1;
    r=last-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        vector<int> temp;
        for(int i=mid; i<=last; i++) temp.pb(i);

        int val = query(temp);
        if((temp.size()-val) & 1)
        {
            first = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    //middle index
    l=first+1;
    r=last-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        vector<int> temp;
        for(int i=first; i<=mid; i++) temp.pb(i);
        temp.pb(last);

        int val = query(temp);
        if((temp.size()-val) & 1)
        {
            middle = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout<<"! "<<first<<' '<<middle<<' '<<last<<endl;
}

int main()
{
    optimize();
    //solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
