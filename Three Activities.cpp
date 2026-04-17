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
    vector<int> a(n), b(n), c(n);

    vector<pair<int,int>> A, B, C;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        A.pb({a[i], i});
    }
    for(int i=0; i<n; i++) 
    {
        cin>>b[i];
        B.pb({b[i], i});
    }
    for(int i=0; i<n; i++) 
    {
        cin>>c[i];
        C.pb({c[i], i});
    }
    sort(allr(A));
    sort(allr(B));
    sort(allr(C));

    int ans=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                int x = A[i].ss;
                int y = B[j].ss;
                int z = C[k].ss;

                if(x != y && y != z && x != z) 
                {
                    ans = max(ans, a[x]+b[y]+c[z]);
                }
            }
        }
    }
    cout<<ans<<nl;
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