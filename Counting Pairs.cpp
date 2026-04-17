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
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    vl v(n);
    ll sum=0;
    fri(0,n) cin>>v[i],sum+=v[i];
    sort(all(v));
    ll ans=0;
    // Binary Search marte giye matha nosto hoye gelo ((
    fri(0,n)
    {
        ll l=i+1, r=n-1, left=-1, right=-1;
        while(l<=r)
        {
            ll mid = (l+r)>>1; //(l+r)/2
            ll check1 = sum-(v[i]+v[mid]);
            if(check1>=x && check1<=y)
            {
                left = mid;
                r = mid-1;
            }
            else if(check1<x) r = mid-1;
            else l = mid+1;
        }

        l = i+1;
        r = n-1;
        while(l<=r)
        {
            ll mid = (l+r)>>1;
            ll check2 = sum-(v[i]+v[mid]);
            if(check2>=x && check2<=y)
            {
                right = mid;
                l = mid+1;
            }
            else if(check2<x) r = mid-1;
            else l = mid+1;
        }
        if(right != -1 && left != -1) ans += (right-left+1);
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
